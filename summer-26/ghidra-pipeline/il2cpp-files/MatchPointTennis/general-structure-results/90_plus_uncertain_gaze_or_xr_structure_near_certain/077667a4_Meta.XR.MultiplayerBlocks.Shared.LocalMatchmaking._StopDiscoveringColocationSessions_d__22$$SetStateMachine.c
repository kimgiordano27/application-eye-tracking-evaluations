/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$SetStateMachine
ENTRY_POINT: 077667a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__SetStateMachine
               (void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  int unaff_w20;
  int iVar4;
  uint unaff_w24;
  undefined8 *unaff_x27;
  float fVar5;
  int iVar6;
  float unaff_s10;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000090;
  
  while( true ) {
    if (in_w8 != 0) {
      fVar5 = logf((float)(int)unaff_w24);
      fVar5 = exp2f((float)(int)(fVar5 / unaff_s10));
      unaff_w24 = 0x80000000;
      if (fVar5 != INFINITY) {
        unaff_w24 = (int)fVar5;
      }
      if (unaff_w24 < 3) {
        unaff_w24 = 2;
      }
    }
    if ((int)in_stack_00000078._4_4_ <= (int)unaff_w24) {
      unaff_w24 = in_stack_00000078._4_4_;
    }
    lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*unaff_x27);
    if (lVar1 == 0) break;
    *(uint *)(lVar1 + 0x10) = unaff_w24;
    lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*unaff_x27);
    if (lVar1 == 0) break;
    iVar4 = *(int *)(lVar1 + 0x10);
    lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*unaff_x27);
    if ((lVar1 == 0) || (in_stack_00000068 == 0)) break;
    iVar6 = *(int *)(lVar1 + 0x14);
    FUN_05a28f70(in_stack_00000068,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar4,(float)iVar6,in_stack_00000090);
    unaff_x27 = (undefined8 *)PTR_DAT_09f32e38;
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(in_stack_00000070 + 0x18) <= unaff_w20) {
      if (*(int *)(in_stack_00000070 + 0x18) < 1) goto LAB_07766930;
      iVar4 = 0;
      goto LAB_077668cc;
    }
    lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar1 == 0) break;
    unaff_w24 = *(uint *)(lVar1 + 0x10);
    lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*unaff_x27);
    if (lVar1 == 0) break;
    in_w8 = (uint)*(byte *)(in_stack_00000090 + 0x14);
  }
LAB_07766980:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_077668cc:
  uVar2 = FUN_05badb74(in_stack_00000070,iVar4,*unaff_x27);
  if (in_stack_00000068 == 0) goto LAB_07766980;
  uVar3 = FUN_05a28f70(in_stack_00000068,iVar4,*(undefined8 *)PTR_DAT_09f32c78);
  FUN_07761148(uVar3,uVar2,uVar3);
  lVar1 = FUN_05badb74(in_stack_00000070,iVar4,*unaff_x27);
  if (lVar1 == 0) goto LAB_07766980;
  FUN_077606dc();
  iVar4 = iVar4 + 1;
  if (*(int *)(in_stack_00000070 + 0x18) <= iVar4) {
LAB_07766930:
    FUN_05baf9bc(in_stack_00000070,*(undefined8 *)PTR_DAT_09f32cd0);
    return;
  }
  goto LAB_077668cc;
}


