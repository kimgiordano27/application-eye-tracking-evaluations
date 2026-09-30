/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_is_muted_set
ENTRY_POINT: 0789dbc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0789df28) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_is_muted_set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined8 uVar10;
  
                    /* try { // try from 0789dbdc to 0799dbdf has its CatchHandler @ 0789df3c */
  FUN_05fa0540();
                    /* try { // try from 0789dbe0 to 0799dbef has its CatchHandler @ 0789df54 */
  lVar3 = FUN_03a8a804(*unaff_x22,1);
  puVar1 = PTR_DAT_08492920;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
                    /* try { // try from 0789dc00 to 0799dc1f has its CatchHandler @ 0789df50 */
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_08492920;
      thunk_FUN_03afed3c();
      lVar4 = FUN_03a8a804(*unaff_x22,2);
      if (lVar4 == 0) goto LAB_0789df20;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar1;
        thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x20));
        puVar1 = PTR_DAT_084c82e0;
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar4 + 0x28) =
               *(undefined8 *)
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<UpscalePass_PassData,_RasterGraphContext>_TypeInfo
          ;
          uVar5 = thunk_FUN_03afed3c();
          uVar5 = FUN_0789cd6c(uVar5,lVar4);
          uVar6 = FUN_065cd268(uVar5,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN_05fa0540();
          }
          uVar10 = *(undefined8 *)puVar1;
          uVar5 = FUN_0789ce44(uVar6,lVar3);
          uVar6 = FUN_065cd268(uVar5,0);
          if ((((uVar6 & 1) == 0) ||
              (uVar6 = thunk_FUN_065cbffc(uVar10,*(undefined8 *)puVar1,0), (uVar6 & 1) != 0)) ||
             (uVar6 = thunk_FUN_065cbffc(uVar10,*(undefined8 *)
                                                 UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo
                                         ,0), (uVar6 & 1) != 0)) {
            FUN_05fa0540();
          }
          if (unaff_x20 == 0) {
            return;
          }
          plVar9 = *(long **)(unaff_x20 + 0x28);
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar3 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084c3f08) {
                puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0789dd70;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084c3f08,0);
LAB_0789dd70:
          plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
          puVar2 = PTR_DAT_084c3f10;
          puVar1 = PTR_DAT_08488568;
          do {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            lVar3 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0789ddf4;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)puVar1,0);
LAB_0789ddf4:
            uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar9 == (long *)0x0) {
                return;
              }
              lVar3 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar6 == 0) goto LAB_0789decc;
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              goto LAB_0789deb4;
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            lVar3 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0789de58;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)puVar2,0);
LAB_0789de58:
            (*(code *)*puVar7)(plVar9,puVar7[1]);
            FUN_05fa052c();
          } while( true );
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
LAB_0789df20:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_0789deb4:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
      puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0789dee8;
    }
  }
LAB_0789decc:
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_08488550,0);
LAB_0789dee8:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
  return;
}


