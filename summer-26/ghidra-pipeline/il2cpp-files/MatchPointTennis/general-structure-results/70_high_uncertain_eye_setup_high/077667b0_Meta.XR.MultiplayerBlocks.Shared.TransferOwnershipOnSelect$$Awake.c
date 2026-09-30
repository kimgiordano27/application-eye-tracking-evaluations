/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$Awake
ENTRY_POINT: 077667b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__Awake(float param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int iVar4;
  uint uVar5;
  undefined8 *unaff_x27;
  float fVar6;
  int iVar7;
  float unaff_s10;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000090;
  
  do {
    fVar6 = exp2f((float)(int)(param_1 / unaff_s10));
    uVar5 = 0x80000000;
    if (fVar6 != INFINITY) {
      uVar5 = (int)fVar6;
    }
    if (uVar5 < 3) {
      uVar5 = 2;
    }
    do {
      if ((int)in_stack_00000078._4_4_ <= (int)uVar5) {
        uVar5 = in_stack_00000078._4_4_;
      }
      lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*unaff_x27);
      if (lVar1 == 0) goto LAB_07766980;
      *(uint *)(lVar1 + 0x10) = uVar5;
      lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*unaff_x27);
      if (lVar1 == 0) goto LAB_07766980;
      iVar4 = *(int *)(lVar1 + 0x10);
      lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*unaff_x27);
      if ((lVar1 == 0) || (in_stack_00000068 == 0)) goto LAB_07766980;
      iVar7 = *(int *)(lVar1 + 0x14);
      FUN_05a28f70(in_stack_00000068,0,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07760c44((float)iVar4,(float)iVar7,in_stack_00000090);
      unaff_x27 = (undefined8 *)PTR_DAT_09f32e38;
      unaff_w20 = unaff_w20 + 1;
      if (*(int *)(in_stack_00000070 + 0x18) <= unaff_w20) {
        if (*(int *)(in_stack_00000070 + 0x18) < 1) goto LAB_07766930;
        iVar4 = 0;
        goto LAB_077668cc;
      }
      lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*(undefined8 *)PTR_DAT_09f32e38);
      if (lVar1 == 0) goto LAB_07766980;
      uVar5 = *(uint *)(lVar1 + 0x10);
      lVar1 = FUN_05badb74(in_stack_00000070,unaff_w20,*unaff_x27);
      if (lVar1 == 0) goto LAB_07766980;
    } while (*(char *)(in_stack_00000090 + 0x14) == '\0');
    param_1 = logf((float)(int)uVar5);
  } while( true );
LAB_077668cc:
  uVar2 = FUN_05badb74(in_stack_00000070,iVar4,*unaff_x27);
  if (in_stack_00000068 == 0) {
LAB_07766980:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
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


