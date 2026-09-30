/*
FUNCTION_NAME: FUN_056d1304
ENTRY_POINT: 056d1304
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_056d1304(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
                    /* try { // try from 056d1304 to 057d1307 has its CatchHandler @ 056d133c */
                    /* try { // try from 056d1308 to 057d130b has its CatchHandler @ 056d1334 */
                    /* try { // try from 056d130c to 057d130f has its CatchHandler @ 056d1330 */
                    /* try { // try from 056d1310 to 057d131b has its CatchHandler @ 056d0ffc */
                    /* try { // try from 056d131c to 057d131f has its CatchHandler @ 056d1320 */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 056d131c with catch @ 056d1320
                       try { // try from 056d1320 to 057d135f has its CatchHandler @ 056d0ffc */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 056d125c with catch @ 056d132c
                        */
  if ((DAT_06a54afc & 1) == 0) {
                    /* catch(type#1 @ 06204328) { ... } // from try @ 056d130c with catch @ 056d1330
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 056d1308 with catch @ 056d1334
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 056d1258 with catch @ 056d1338
                        */
    FUN_02d4dc40(PTR_DAT_066492c0);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 056d1304 with catch @ 056d133c
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 056d121c with catch @ 056d1340
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 056d11b8 with catch @ 056d1344
                        */
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<Background>_AddProperty<Texture2D>__);
    FUN_02d4dc40(Method_Unity_Properties_ContainerPropertyBag<Scale>__ctor__);
    FUN_02d4dc40(PlayFab_ClientModels_GetTitleDataRequest_TypeInfo);
                    /* try { // try from 056d1360 to 057d1363 has its CatchHandler @ 056d136c */
    FUN_02d4dc40(PTR_DAT_066514a0);
                    /* catch() { ... } // from try @ 056d1360 with catch @ 056d136c */
                    /* try { // try from 056d1370 to 057d1377 has its CatchHandler @ 056d1380 */
    DAT_06a54afc = 1;
  }
                    /* try { // try from 056d1378 to 057d1383 has its CatchHandler @ 056d0ffc */
  lVar4 = FUN_056cd6b8(param_1);
  puVar3 = Method_Unity_Properties_ContainerPropertyBag<Scale>__ctor__;
  puVar2 = PlayFab_ClientModels_GetTitleDataRequest_TypeInfo;
  if (lVar4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 056d1370 with catch @ 056d1380
                        */
    lVar5 = FUN_058130c8(lVar4,*(undefined8 *)PlayFab_ClientModels_GetTitleDataRequest_TypeInfo,0);
    if ((lVar5 != 0) && (uVar6 = FUN_04e7e8d0(lVar5,*(undefined8 *)puVar3,5,0), (uVar6 & 1) == 0)) {
      thunk_FUN_02db45e8(PTR_DAT_0664e5a0);
      uVar10 = thunk_FUN_02d8a638();
      uVar11 = thunk_FUN_02db45e8(
                                 Method_Unity_Properties_ContainerPropertyBag<StylePropertyName>_AddProperty<string>__
                                 );
      FUN_056d0e20(uVar10,uVar11);
      uVar11 = thunk_FUN_02db45e8(
                                 Method_Unity_Properties_ContainerPropertyBag<StylePropertyName>_AddProperty<StylePropertyId>__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar10,uVar11);
    }
    puVar1 = PTR_DAT_066492c0;
    FUN_058130d8(lVar4,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
    uVar10 = **(undefined8 **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
    plVar7 = (long *)thunk_FUN_02d8a638(*(undefined8 *)puVar1);
    FUN_04e89168(plVar7,0);
    if (param_2 != (long *)0x0) {
      lVar4 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
      puVar3 = Method_Unity_Properties_ContainerPropertyBag<Background>_AddProperty<Texture2D>__;
      puVar2 = PTR_DAT_066514a0;
      if (lVar4 != 0) {
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar6 = 0;
          uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            if (plVar7 == (long *)0x0) goto LAB_056d1538;
            uVar11 = *(undefined8 *)(lVar4 + 0x20 + uVar6 * 8);
            FUN_04e8aac8(plVar7,uVar10,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar10 = FUN_056d1584(uVar11);
            FUN_04e8aac8(plVar7,uVar10,0);
            FUN_04e8b3e4(plVar7,0x3d,0);
            FUN_058130c8(param_2,uVar11,0);
            uVar10 = FUN_056d1584();
            FUN_04e8aac8(plVar7,uVar10,0);
            uVar9 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar6 = uVar6 + 1;
            uVar10 = *(undefined8 *)puVar2;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        plVar8 = (long *)FUN_04e9a5a8(0);
        if (plVar7 != (long *)0x0) {
          uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          if (plVar8 != (long *)0x0) {
            lVar4 = (**(code **)(*plVar8 + 600))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x260));
            if (lVar4 != 0) {
              *(long *)(param_1 + 0x68) = (long)*(int *)(lVar4 + 0x18);
              return;
            }
          }
        }
      }
    }
  }
LAB_056d1538:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


