/*
FUNCTION_NAME: UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle$$IndexOf
ENTRY_POINT: 021e8854
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_ProBuilder_Poly2Tri_DelaunayTriangle__IndexOf(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 in_w8;
  undefined8 *unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *unaff_x22;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined1 uStack00000000000000d0;
  undefined2 uStack00000000000001b0;
  
  uStack00000000000001b0 = 0;
  uStack00000000000000d0 = in_w8;
  FUN_01347274(&stack0x000001b0,&stack0x000000d0);
  *(undefined2 *)(unaff_x20 + 0x40) = uStack00000000000001b0;
  uVar3 = FUN_015ff8a0(unaff_x19[5],0);
  puVar2 = OVRPlugin_OVRP_1_105_0_TypeInfo;
  if ((uVar3 & 1) == 0) {
    if (unaff_x19[5] == 0) goto LAB_021e8a04;
    uVar4 = FUN_01604018(unaff_x19[5],0);
    uVar3 = thunk_FUN_015fe514(uVar4,*(undefined8 *)puVar2,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = thunk_FUN_015fe514(uVar4,*(undefined8 *)
                                        Method_System_Collections_Generic_List<NoteRecorder_NoteEventData>_Add__
                                 ,0);
      if ((uVar3 & 1) == 0) {
        uVar7 = unaff_x19[4];
        uVar4 = thunk_FUN_00d48444(StringLiteral_13200);
        uVar6 = thunk_FUN_00d48444(System_Collections_Generic_List<HandGrabPose>_TypeInfo);
        uVar4 = FUN_01600424(uVar4,uVar7,uVar6,0);
LAB_021e8a28:
        thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017713a8(uVar6,uVar4,0);
        uVar4 = thunk_FUN_00d48444(StringLiteral_7533);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,uVar4);
      }
      uVar4 = *unaff_x22;
      uStack00000000000000d0 = 0;
    }
    else {
      uVar4 = *unaff_x22;
      uStack00000000000000d0 = 1;
    }
    uStack00000000000001b0 = 0;
    FUN_01347274(&stack0x000001b0,&stack0x000000d0,uVar4);
    FUN_021e7090();
  }
  if (unaff_x19[0xc] == 0) {
    return;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_7948);
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)OVR_OpenVR_VREvent_t_TypeInfo);
    lVar8 = unaff_x19[0xc];
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        lVar11 = 0;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar10 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_021e8a04;
          uVar3 = FUN_015ff8a0(*(undefined8 *)(lVar10 + 0x10),0);
          if ((uVar3 & 1) == 0) {
            lVar11 = lVar10;
          }
          if ((uVar3 & 1) != 0) {
            uVar6 = *unaff_x19;
            uVar4 = thunk_FUN_00d48444(Method_System_IO_File_WriteAllText__);
            uVar4 = FUN_015f5b28(uVar4,uVar6,0);
            goto LAB_021e8a28;
          }
          if (lVar11 == 0) goto LAB_021e8a04;
          FUN_021ecf78(&stack0x000000e0);
          memcpy(&stack0x00000000,&stack0x000000e0,0xd0);
          FUN_00c66f98(lVar5);
          uVar1 = *(uint *)(lVar8 + 0x18);
          uVar9 = uVar9 + 1;
          lVar11 = lVar10;
        } while ((int)uVar9 < (int)uVar1);
      }
      uVar4 = FUN_01325140(lVar5,*(undefined8 *)StringLiteral_11254);
      *(undefined8 *)(unaff_x20 + 0x90) = uVar4;
      return;
    }
  }
LAB_021e8a04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


