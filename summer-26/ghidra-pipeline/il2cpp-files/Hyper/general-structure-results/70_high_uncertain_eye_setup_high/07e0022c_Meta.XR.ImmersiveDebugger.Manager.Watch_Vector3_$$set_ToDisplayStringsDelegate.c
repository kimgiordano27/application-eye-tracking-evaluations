/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 07e0022c
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_ToDisplayStringsDelegate
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x19;
  undefined8 uVar6;
  long unaff_x21;
  
  uVar2 = FUN_08d93fbc(param_1,param_2,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
    }
    uVar6 = FUN_08d895f0(uVar6,0);
    uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x30) + 0x20,0);
    uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04980b34();
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
      }
      uVar6 = FUN_08d895f0(uVar6,0);
      uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x40) + 0x20,0);
      uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04980b34();
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
        }
        uVar6 = FUN_08d895f0(uVar6,0);
        uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x38) + 0x20,0);
        uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
        if ((uVar2 & 1) == 0) {
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_04980b34();
          }
          uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
          if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
          }
          uVar6 = FUN_08d895f0(uVar6,0);
          uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x50) + 0x20,0);
          uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
          if ((uVar2 & 1) == 0) {
            lVar3 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_04980b34();
            }
            uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
            if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
            }
            uVar6 = FUN_08d895f0(uVar6,0);
            uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x48) + 0x20,0);
            uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
            if ((uVar2 & 1) == 0) {
              lVar3 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_04980b34();
              }
              uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
              if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
              }
              uVar6 = FUN_08d895f0(uVar6,0);
              uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x70) + 0x20,0);
              uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
              if ((uVar2 & 1) == 0) {
                lVar3 = *(long *)(unaff_x19 + 0x20);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_04980b34();
                }
                uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
                if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
                }
                uVar6 = FUN_08d895f0(uVar6,0);
                uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x68) + 0x20,0);
                uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
                if ((uVar2 & 1) == 0) {
                  lVar3 = *(long *)(unaff_x19 + 0x20);
                  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    lVar3 = FUN_04980b34();
                  }
                  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
                  }
                  uVar6 = FUN_08d895f0(uVar6,0);
                  uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x78) + 0x20,0);
                  uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
                  if ((uVar2 & 1) != 0) goto LAB_07e0044c;
                  lVar3 = *(long *)(unaff_x19 + 0x20);
                  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    lVar3 = FUN_04980b34();
                  }
                  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
                  }
                  uVar6 = FUN_08d895f0(uVar6,0);
                  uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x80) + 0x20,0);
                  uVar2 = FUN_08d93fbc(uVar6,uVar4,0);
                  if ((uVar2 & 1) == 0) {
                    thunk_FUN_049ae08c(PTR_DAT_0ac42638);
                    FUN_0433a0d0();
                    uVar6 = FUN_092f292c(0);
                    thunk_FUN_049ae08c(PTR_DAT_0ac0be88);
                    uVar4 = thunk_FUN_04983f60();
                    FUN_08d74c44(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
                    FUN_04948050(uVar4);
                  }
                }
              }
              uVar5 = 8;
              goto LAB_07e002a0;
            }
          }
LAB_07e0044c:
          uVar5 = 4;
          goto LAB_07e002a0;
        }
      }
      uVar5 = 2;
      goto LAB_07e002a0;
    }
  }
  uVar5 = 1;
LAB_07e002a0:
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = 0x10 / uVar5;
  }
  return uVar1;
}


