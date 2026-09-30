/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$.ctor
ENTRY_POINT: 0562a0c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0562a490) */
/* WARNING: Removing unreachable block (ram,0x0562a468) */

undefined8 Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager___ctor(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  FUN_05987d14(**(undefined8 **)(lVar3 + 0xb8));
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_032934b8();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  iVar2 = (*pcVar7)(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
  if (iVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8(lVar5);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    uVar6 = thunk_FUN_032a56a0();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_032934b8();
      lVar4 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    (*pcVar7)(uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_032934b8();
      lVar4 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    in_stack_00000008 = uVar6;
    (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar3,&stack0x00000008,uVar6);
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_032934b8();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
  (**(code **)(lVar5 + 0x10))(uVar6,lVar5,lVar3,0,&stack0x00000008);
  uVar6 = in_stack_00000008;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_032934b8();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  in_stack_00000008 = uVar6;
  (**(code **)(lVar5 + 0x10))(uVar8,lVar5,lVar3,&stack0x00000008,&stack0x00000004);
  return uVar6;
}


