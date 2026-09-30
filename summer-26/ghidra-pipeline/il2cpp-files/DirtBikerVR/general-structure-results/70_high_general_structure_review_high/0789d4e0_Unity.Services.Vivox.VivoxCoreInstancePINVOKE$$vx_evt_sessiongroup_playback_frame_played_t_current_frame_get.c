/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_playback_frame_played_t_current_frame_get
ENTRY_POINT: 0789d4e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0789d834) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_playback_frame_played_t_current_frame_get
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
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
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  if (!in_ZR) {
    unaff_x25 = unaff_x26;
  }
  FUN_05fa0540(param_1,param_2,*unaff_x25);
  lVar3 = FUN_03a8a804(*unaff_x22,1);
  puVar1 = PTR_DAT_08492920;
  if (lVar3 == 0) {
LAB_0789d82c:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_08492920;
    thunk_FUN_03afed3c();
    lVar4 = FUN_03a8a804(*unaff_x22,2);
    if (lVar4 == 0) goto LAB_0789d82c;
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
              goto LAB_0789d67c;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084c3f08,0);
LAB_0789d67c:
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
                goto LAB_0789d700;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)puVar1,0);
LAB_0789d700:
          uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar3 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 == 0) goto LAB_0789d7d8;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_base__get;
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
                goto LAB_0789d764;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)puVar2,0);
LAB_0789d764:
          (*(code *)*puVar7)(plVar9,puVar7[1]);
          FUN_05fa052c();
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_base__get:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
      puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0789d7f4;
    }
  }
LAB_0789d7d8:
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_08488550,0);
LAB_0789d7f4:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
  return;
}


