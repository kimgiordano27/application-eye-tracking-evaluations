/*
FUNCTION_NAME: FUN_05dbef28
ENTRY_POINT: 05dbef28
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05dbf324) */

void FUN_05dbef28(long *param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_066dbd11 & 1) == 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05dbeeec with catch @ 05dbef5c
                        */
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(System_MissingMemberException_TypeInfo);
                    /* try { // try from 05dbef78 to 05ebef7b has its CatchHandler @ 05dbef88 */
    FUN_02b3c81c(System_Reflection_MissingMetadataException_TypeInfo);
                    /* catch() { ... } // from try @ 05dbef78 with catch @ 05dbef88 */
    FUN_02b3c81c(PTR_DAT_06312f90);
                    /* try { // try from 05dbef8c to 05ebef93 has its CatchHandler @ 05dbef9c */
                    /* try { // try from 05dbef94 to 05ebef9f has its CatchHandler @ 05dbee90 */
    FUN_02b3c81c(Method_System_Xml_Linq_XText_set_Value__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05dbef8c with catch @ 05dbef9c
                        */
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_BloomPassData>__
                );
    DAT_066dbd11 = 1;
  }
  plVar11 = (long *)param_1[10];
  if (plVar11 == (long *)0x0) goto LAB_05dbf320;
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)Method_System_Xml_Linq_XText_set_Value__) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05dbf00c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)Method_System_Xml_Linq_XText_set_Value__,0);
LAB_05dbf00c:
  uVar4 = (*(code *)*puVar6)(plVar11,param_2,puVar6[1]);
  uVar9 = (**(code **)(*param_1 + 0x308))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x310));
  if ((uVar9 & 1) == 0) {
    return;
  }
  uVar9 = FUN_05dbdecc(param_1);
  if ((uVar9 & 1) != 0) {
    if ((param_3 & 1) != 0) {
      uVar7 = (**(code **)(*param_1 + 0x2d8))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x2e0));
      plVar11 = (long *)(**(code **)(*param_1 + 0x2b8))
                                  (param_1,uVar7,*(undefined8 *)(*param_1 + 0x2c0));
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)System_MissingMemberException_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05dbf0d8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02b7654c(plVar11,*(long *)System_MissingMemberException_TypeInfo,0);
LAB_05dbf0d8:
        plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
        puVar3 = 
        Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_BloomPassData>__
        ;
        puVar2 = System_Reflection_MissingMetadataException_TypeInfo;
        puVar1 = PTR_DAT_06312f90;
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05dbf15c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar1,0);
LAB_05dbf15c:
          uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
          if ((uVar9 & 1) == 0) {
            if (plVar11 == (long *)0x0) goto LAB_05dbf268;
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_05dbf23c;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_05dbf224;
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05dbf1c0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar2,0);
LAB_05dbf1c0:
          uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
          lVar8 = FUN_05dbbfd4(param_1);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(long *)(lVar8 + 0x3d8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_037545a0(*(long *)(lVar8 + 0x3d8),uVar5,*(undefined8 *)puVar3);
        } while( true );
      }
      goto LAB_05dbf320;
    }
    goto LAB_05dbf268;
  }
  goto LAB_05dbf2a4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_05dbf224:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05dbf258;
    }
  }
LAB_05dbf23c:
  puVar6 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)PTR_DAT_06312f78,0);
LAB_05dbf258:
  (*(code *)*puVar6)(plVar11,puVar6[1]);
LAB_05dbf268:
  lVar8 = FUN_05dbbfd4(param_1);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x3d8) == 0)) goto LAB_05dbf320;
  FUN_037545a0(*(long *)(lVar8 + 0x3d8),uVar4,
               *(undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_BloomPassData>__
              );
  lVar8 = FUN_05dbbfd4(param_1);
  if (lVar8 == 0) goto LAB_05dbf320;
  FUN_05df39b4(lVar8,0);
LAB_05dbf2a4:
  if (param_1[8] == 0) {
LAB_05dbf320:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  thunk_FUN_05cdc714(param_1[8],param_2,1,param_3 & 1,0);
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((param_4 & 1) != 0) {
    lVar8 = FUN_05dbbfd4(param_1);
    if (lVar8 == 0) goto LAB_05dbf320;
    FUN_05ea5f14(lVar8,0);
  }
  FUN_05dbe070(param_1,uVar4,0,param_3 & 1);
  return;
}


