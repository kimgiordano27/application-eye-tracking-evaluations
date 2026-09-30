/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<InputEventTrace.DeviceInfo>
ENTRY_POINT: 020ce47c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void System_Array__InternalArray__Insert<InputEventTrace_DeviceInfo>(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint in_w8;
  long unaff_x19;
  long *plVar5;
  long *unaff_x20;
  long unaff_x21;
  
  if (1 < in_w8) {
    FUN_04038e80(0x3f800000);
    if (1 < *(uint *)(unaff_x21 + 0x18)) {
      FUN_04038e70(0x3f800000);
      if (*unaff_x20 != 0) {
        FUN_04039170();
        plVar5 = (long *)(unaff_x19 + 0xe8);
        if (*plVar5 != 0) {
          return;
        }
        lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                                  );
        FUN_04063570(lVar4,0);
        *plVar5 = lVar4;
        thunk_FUN_01f51358(plVar5,lVar4);
        lVar4 = FUN_01f08890(*(undefined8 *)
                              Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                             ,3);
        uVar3 = _UNK_00c91fb8;
        uVar2 = _DAT_00c91fb0;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 != 0) {
            *(undefined4 *)(lVar4 + 0x30) = 0;
            *(undefined8 *)(lVar4 + 0x28) = uVar3;
            *(undefined8 *)(lVar4 + 0x20) = uVar2;
            uVar3 = _UNK_00c91e28;
            uVar2 = _DAT_00c91e20;
            if (uVar1 != 1) {
              *(undefined4 *)(lVar4 + 0x44) = 0x3f000000;
              *(undefined8 *)(lVar4 + 0x3c) = uVar3;
              *(undefined8 *)(lVar4 + 0x34) = uVar2;
              uVar3 = _UNK_00c8f798;
              uVar2 = _DAT_00c8f790;
              if (2 < uVar1) {
                *(undefined4 *)(lVar4 + 0x58) = 0x3f800000;
                *(undefined8 *)(lVar4 + 0x50) = uVar3;
                *(undefined8 *)(lVar4 + 0x48) = uVar2;
                if (*plVar5 != 0) {
                  FUN_04063768(*plVar5,lVar4,0);
                  return;
                }
                goto LAB_020ce594;
              }
            }
          }
          goto LAB_020ce590;
        }
      }
LAB_020ce594:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
LAB_020ce590:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


