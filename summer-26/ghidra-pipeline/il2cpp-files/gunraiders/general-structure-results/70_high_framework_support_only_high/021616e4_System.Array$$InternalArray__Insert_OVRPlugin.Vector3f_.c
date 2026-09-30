/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Vector3f>
ENTRY_POINT: 021616e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_Vector3f>(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *unaff_x19;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  FUN_01c5d288(PTR_DAT_04237a90);
  *(undefined1 *)(unaff_x20 + 0xc11) = 1;
  puVar1 = PTR_DAT_0422f9e8;
  if (unaff_x19[0xe] == 0) goto LAB_021618bc;
  if (*(char *)(unaff_x19[0xe] + 0x68) != '\0') {
    (**(code **)(*unaff_x19 + 0x1d8))();
    if (*(char *)((long)unaff_x19 + 0x94) != '\0') {
      fVar6 = *(float *)(unaff_x19 + 0x13);
      fVar5 = (float)FUN_03d52334(0);
      *(float *)(unaff_x19 + 0x13) = fVar6 - fVar5;
      if (fVar6 - fVar5 <= 0.0) {
        *(undefined1 *)((long)unaff_x19 + 0x94) = 0;
        lVar3 = unaff_x19[0xe];
        if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_035706d0(lVar3,0);
        return;
      }
    }
    return;
  }
  if (((char)unaff_x19[0xf] == '\0') && (*(char *)((long)unaff_x19 + 0x79) == '\0')) {
    lVar3 = unaff_x19[0xd];
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar2 = FUN_03d4f3bc(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (unaff_x19[0xd] == 0) goto LAB_021618bc;
      uVar4 = *(undefined8 *)(unaff_x19[0xd] + 0x4f0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar2 = FUN_03d4dd60(uVar4,0);
      if ((uVar2 & 1) != 0) goto LAB_0216175c;
    }
    FUN_02081088();
    uVar2 = FUN_01f2852c(*(undefined4 *)((long)unaff_x19 + 0x7c),0);
    if ((uVar2 & 1) != 0) {
      if (unaff_x19[0xb] == 0) goto LAB_021618bc;
      FUN_03dadc5c(*(undefined4 *)((long)unaff_x19 + 0x7c),(int)unaff_x19[0x10],
                   *(undefined4 *)((long)unaff_x19 + 0x84),unaff_x19[0xb],0);
    }
    uVar2 = FUN_01f2852c((int)unaff_x19[0x11],0);
    if ((uVar2 & 1) != 0) {
      if (unaff_x19[0xb] == 0) goto LAB_021618bc;
      FUN_03dadd94((int)unaff_x19[0x11],*(undefined4 *)((long)unaff_x19 + 0x8c),(int)unaff_x19[0x12]
                   ,unaff_x19[0xb],0);
    }
    *(undefined2 *)(unaff_x19 + 0x1d) = 0;
    if (unaff_x19[10] != 0) {
      FUN_03db0384(unaff_x19[10],0,0);
      FUN_02161bbc();
      return;
    }
  }
  else {
LAB_0216175c:
    FUN_021618c0();
    FUN_02081088();
    FUN_02161a48();
    if (unaff_x19[10] != 0) {
      FUN_03db0384(unaff_x19[10],1,0);
      return;
    }
  }
LAB_021618bc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


