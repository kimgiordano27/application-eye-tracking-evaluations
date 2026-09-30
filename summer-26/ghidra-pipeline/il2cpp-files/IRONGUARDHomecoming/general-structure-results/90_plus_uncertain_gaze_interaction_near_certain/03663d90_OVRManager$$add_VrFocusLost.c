/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 03663d90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVRManager__add_VrFocusLost(undefined1 param_1 [16],float param_2,float param_3)

{
  void *__dest;
  int iVar1;
  long lVar2;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar3;
  long unaff_x25;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float unaff_s14;
  undefined8 in_stack_00000010;
  
  FUN_036636d4();
  lVar3 = *(long *)(unaff_x23 + 0x10);
  memcpy(&stack0x00000030,&stack0x00000080,0x50);
  if (lVar3 != 0) {
    __dest = (void *)(lVar3 + 0x50);
    memcpy(__dest,&stack0x00000030,0x50);
    thunk_FUN_01f51358(__dest,0);
    lVar3 = *(long *)(unaff_x21 + 0x80);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0358d1e4(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      }
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar3 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
        lVar2 = FUN_04070398();
        if (lVar2 != 0) {
          fVar4 = (float)FUN_0407d3c8(lVar2,0);
          fVar6 = param_3;
          fVar9 = param_2;
          lVar2 = FUN_04070398();
          if ((lVar2 != 0) && (fVar5 = (float)FUN_0407d840(lVar2,0), lVar3 != 0)) {
            uVar12 = (ulong)(uint)(param_3 - fVar6);
            uVar10 = (ulong)(uint)(param_2 - fVar9);
            FUN_0407d468(fVar4 - fVar5,uVar10,uVar12,lVar3,0);
            if (*(long *)(unaff_x21 + 0x70) != 0) {
              lVar3 = FUN_04070398(*(long *)(unaff_x21 + 0x70),0);
              lVar2 = FUN_04070398();
              if (lVar2 != 0) {
                uVar7 = FUN_0407d3c8(lVar2,0);
                uVar11 = uVar10;
                uVar13 = uVar12;
                lVar2 = FUN_04070398();
                if ((lVar2 != 0) && (uVar8 = FUN_0407d7c4(lVar2,0), lVar3 != 0)) {
                  thunk_FUN_0407e5d4(uVar7,uVar10,uVar12,uVar8,uVar11,uVar13,lVar3,0);
                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                    fVar6 = (float)FUN_0403cb70(*(long *)(unaff_x21 + 0x70),0);
                    *(float *)(unaff_x19 + 0x104) = fVar6;
                    *(float *)(unaff_x19 + 0x108) = unaff_s14;
                    if (*unaff_x20 == '\0') {
                      uVar7 = CONCAT44(unaff_s14 - (float)((ulong)in_stack_00000010 >> 0x20),
                                       fVar6 - (float)in_stack_00000010);
                    }
                    else {
                      if (DAT_0482ee9c == '\0') {
                        thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
                        DAT_0482ee9c = '\x01';
                      }
                      uVar7 = **(undefined8 **)
                                (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ +
                                0xb8);
                    }
                    *(undefined8 *)(unaff_x25 + 8) = uVar7;
                    *(undefined4 *)(unaff_x19 + 0x148) = 0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


