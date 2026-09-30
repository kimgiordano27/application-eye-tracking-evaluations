/*
FUNCTION_NAME: UnityEngine.XR.Eyes$$Eyes_TryGetEyePosition
ENTRY_POINT: 087b8510
PROGRAM: m3ar-libil2cpp.so
SCORE: 120
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


long UnityEngine_XR_Eyes__Eyes_TryGetEyePosition(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x25;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_090152d8);
  FUN_0403162c(PTR_DAT_08f821b8);
  FUN_0403162c(PTR_DAT_08f842d0);
  FUN_0403162c(PTR_DAT_090150f8);
  *(undefined1 *)(unaff_x20 + 0xd38) = 1;
  lVar1 = FUN_040316d0(*unaff_x19,3);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar3);
    lVar3 = *unaff_x25;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  if (puVar4[1] == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar3);
      puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar5 = *puVar4;
    uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015460);
    FUN_0534c904(uVar2,uVar5,*(undefined8 *)PTR_DAT_09015468,0);
    lVar3 = *unaff_x25;
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = uVar2;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar3);
    lVar3 = *unaff_x25;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  if (puVar4[2] == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar3);
      puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar5 = *puVar4;
    uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015498);
    FUN_0693d4ec(uVar2,uVar5,*(undefined8 *)PTR_DAT_09015470,0);
    *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10) = uVar2;
  }
  FUN_0526a65c();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      lVar3 = *unaff_x25;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar3 = *unaff_x25;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0xb8);
      if (puVar4[3] == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
        }
        uVar5 = *puVar4;
        uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015460);
        FUN_0534c904(uVar2,uVar5,*(undefined8 *)PTR_DAT_09015478,0);
        lVar3 = *unaff_x25;
        *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18) = uVar2;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar3 = *unaff_x25;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0xb8);
      if (puVar4[4] == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
        }
        uVar5 = *puVar4;
        uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015498);
        FUN_0693d4ec(uVar2,uVar5,*(undefined8 *)PTR_DAT_09015480,0);
        *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x20) = uVar2;
      }
      FUN_0526a65c();
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x48) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
        *(undefined8 *)(lVar1 + 0x58) = 0;
        *(undefined8 *)(lVar1 + 0x50) = 0;
        lVar3 = *unaff_x25;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar3 = *unaff_x25;
        }
        puVar4 = *(undefined8 **)(lVar3 + 0xb8);
        if (puVar4[5] == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
          }
          uVar5 = *puVar4;
          uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015460);
          FUN_0534c904(uVar2,uVar5,*(undefined8 *)PTR_DAT_09015488,0);
          lVar3 = *unaff_x25;
          *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28) = uVar2;
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar3 = *unaff_x25;
        }
        puVar4 = *(undefined8 **)(lVar3 + 0xb8);
        if (puVar4[6] == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
          }
          uVar5 = *puVar4;
          uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_09015498);
          FUN_0693d4ec(uVar2,uVar5,*(undefined8 *)PTR_DAT_09015490,0);
          *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x30) = uVar2;
        }
        FUN_0526a65c();
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x68) = 0;
          *(undefined8 *)(lVar1 + 0x60) = 0;
          *(undefined8 *)(lVar1 + 0x78) = 0;
          *(undefined8 *)(lVar1 + 0x70) = 0;
          return lVar1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


