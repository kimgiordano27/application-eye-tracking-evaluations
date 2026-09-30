/*
FUNCTION_NAME: OVRPlugin.Ktx$$DestroyKtxTexture
ENTRY_POINT: 03394ed4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Ktx__DestroyKtxTexture(ulong param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long lVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
code_r0x03394ed4:
  if ((param_1 & 1) == 0) goto LAB_03394ef4;
                    /* try { // try from 03394eec to 03494eef has its CatchHandler @ 03394f24 */
  FUN_033962a0();
                    /* try { // try from 03394ef0 to 03494ef3 has its CatchHandler @ 03394f20 */
  do {
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394dbc with catch @ 03394f18
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394e14 with catch @ 03394f1c
                        */
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394ef0 with catch @ 03394f20
                        */
    lVar8 = *unaff_x23;
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394eec with catch @ 03394f24
                        */
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
                    /* try { // try from 03394f3c to 03494f3f has its CatchHandler @ 03394f4c */
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo)
        {
                    /* try { // try from 03394f70 to 03494f77 has its CatchHandler @ 03394f78 */
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03394f78;
        }
                    /* catch() { ... } // from try @ 03394f3c with catch @ 03394f4c */
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 03394f58 to 03494f63 has its CatchHandler @ 03394f78 */
    puVar5 = (undefined8 *)FUN_01c72498();
                    /* try { // try from 03394f64 to 03494f6f has its CatchHandler @ 03394cc0 */
LAB_03394f78:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03394f58 with catch @ 03394f78
                       catch(type#2 @ 00000000) { ... } // from try @ 03394f70 with catch @ 03394f78
                        */
    (*(code *)*puVar5)();
LAB_03394f8c:
    do {
      uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar10 & 1) == 0) {
        FUN_0339d160();
LAB_03395250:
        FUN_0339cf34();
        return in_stack_00000010;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 != 4) {
        if (iVar2 != 5) {
          if (iVar2 != 0xd) {
            FUN_019b2708();
            uVar3 = (**(code **)(*unaff_x19 + 0x188))();
            in_stack_00000020 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
            in_stack_00000028 = 0xffffffffffffffff;
            in_stack_00000030 = uVar3;
            uVar6 = FUN_03307544(&stack0x00000020,0);
            uVar7 = thunk_FUN_01c273e8(
                                      Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                      );
            FUN_03146988(uVar7,uVar6,0);
            uVar6 = FUN_0335cdc4();
            uVar7 = thunk_FUN_01c273e8(
                                      Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar6,uVar7);
          }
          goto LAB_03395250;
        }
        goto LAB_03394f8c;
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar10 = FUN_0339738c();
    } while ((uVar10 & 1) != 0);
    if (unaff_w24 == 0x1c) {
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      lVar8 = unaff_x19[0xc];
      uVar7 = FUN_033594d8();
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_03375738(uVar6,lVar8,uVar7,&stack0x00000038,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03295500(0);
        FUN_033985d4();
      }
      else {
        in_stack_00000028 = in_stack_00000040;
        in_stack_00000020 = in_stack_00000038;
        thunk_FUN_01c49334(*(undefined8 *)UnityEngine_ISubsystemDescriptor_TypeInfo,&stack0x00000020
                          );
      }
    }
    else if (unaff_w24 == 0x1a) {
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      lVar8 = unaff_x19[9];
      lVar12 = unaff_x19[0xc];
      uVar7 = FUN_033594d8();
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_03375048(uVar6,(int)lVar8,lVar12,uVar7,&stack0x00000048,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03295500(0);
        FUN_033985d4();
      }
      else {
        in_stack_00000020 = in_stack_00000048;
        thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422f960,&stack0x00000020);
      }
    }
    else {
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      if ((lVar8 == 0) || (*(char *)(lVar8 + 0x12) == '\0')) {
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03295500(0);
        FUN_033985d4();
      }
      else {
        if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar9 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
        if (plVar9 == (long *)0x0) {
LAB_03394da0:
          lVar12 = 0;
        }
        else {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__
                           + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__)
             ) goto LAB_03394da0;
          lVar12 = plVar9[6];
        }
        uVar7 = *(undefined8 *)(lVar8 + 0x18);
        uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03378ae0(uVar7,lVar12,uVar6,0,0);
      }
    }
    uVar10 = FUN_0335ce1c();
    if ((uVar10 & 1) == 0) {
      thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__
                        );
      uVar6 = FUN_0335cdc4();
      uVar7 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar7);
    }
    if (unaff_x26 != (long *)0x0) break;
LAB_03394ef4:
                    /* try { // try from 03394ef4 to 03494eff has its CatchHandler @ 03394cc0 */
                    /* try { // try from 03394f00 to 03494f03 has its CatchHandler @ 03394f14 */
                    /* try { // try from 03394f04 to 03494f07 has its CatchHandler @ 03394f08 */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394eac with catch @ 03394f08
                       catch(type#1 @ 04025298) { ... } // from try @ 03394f04 with catch @ 03394f08
                       try { // try from 03394f08 to 03494f3b has its CatchHandler @ 03394cc0 */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394e68 with catch @ 03394f0c
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394df4 with catch @ 03394f10
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03394f00 with catch @ 03394f14
                        */
    FUN_033966b4();
  } while( true );
  param_1 = (**(code **)(*unaff_x26 + 0x1a8))();
  goto code_r0x03394ed4;
}


