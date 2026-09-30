/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfDisplayStrings
ENTRY_POINT: 07e002f0
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


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfDisplayStrings
               (undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x21;
  
  uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x40) + 0x20,0);
  uVar3 = FUN_08d93fbc(param_1,uVar2,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
    }
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
    }
    uVar2 = FUN_08d895f0(uVar2,0);
    uVar5 = FUN_08d895f0(*(long *)(unaff_x21 + 0x38) + 0x20,0);
    uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34();
      }
      uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
      }
      uVar2 = FUN_08d895f0(uVar2,0);
      uVar5 = FUN_08d895f0(*(long *)(unaff_x21 + 0x50) + 0x20,0);
      uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04980b34();
        }
        uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
        }
        uVar2 = FUN_08d895f0(uVar2,0);
        uVar5 = FUN_08d895f0(*(long *)(unaff_x21 + 0x48) + 0x20,0);
        uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
        if ((uVar3 & 1) == 0) {
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_04980b34();
          }
          uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
          }
          uVar2 = FUN_08d895f0(uVar2,0);
          uVar5 = FUN_08d895f0(*(long *)(unaff_x21 + 0x70) + 0x20,0);
          uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
          if ((uVar3 & 1) == 0) {
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_04980b34();
            }
            uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
            }
            uVar2 = FUN_08d895f0(uVar2,0);
            uVar5 = FUN_08d895f0(*(long *)(unaff_x21 + 0x68) + 0x20,0);
            uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
            if ((uVar3 & 1) == 0) {
              lVar4 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_04980b34();
              }
              uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
              if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
              }
              uVar2 = FUN_08d895f0(uVar2,0);
              uVar5 = FUN_08d895f0(*(long *)(unaff_x21 + 0x78) + 0x20,0);
              uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
              if ((uVar3 & 1) != 0) goto LAB_07e0044c;
              lVar4 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_04980b34();
              }
              uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
              if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
              }
              uVar2 = FUN_08d895f0(uVar2,0);
              uVar5 = FUN_08d895f0(*(long *)(unaff_x21 + 0x80) + 0x20,0);
              uVar3 = FUN_08d93fbc(uVar2,uVar5,0);
              if ((uVar3 & 1) == 0) {
                thunk_FUN_049ae08c(PTR_DAT_0ac42638);
                FUN_0433a0d0();
                uVar2 = FUN_092f292c(0);
                thunk_FUN_049ae08c(PTR_DAT_0ac0be88);
                uVar5 = thunk_FUN_04983f60();
                FUN_08d74c44(uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
                FUN_04948050(uVar5);
              }
            }
          }
          uVar6 = 8;
          goto LAB_07e002a0;
        }
      }
LAB_07e0044c:
      uVar6 = 4;
      goto LAB_07e002a0;
    }
  }
  uVar6 = 2;
LAB_07e002a0:
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = 0x10 / uVar6;
  }
  return uVar1;
}


