/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$Load
ENTRY_POINT: 04c90aa0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__Load(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x23;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_031c09d4();
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10);
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x23 + 0xe0));
  }
  plVar7 = (long *)FUN_0593e698(uVar11,0);
  if (plVar7 != (long *)0x0) {
    iVar6 = (**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440));
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x23 + 0xe0);
    lVar12 = *(long *)(unaff_x23 + 0x10);
    iVar1 = *(int *)(lVar10 + 0xe4);
    *(bool *)(*(long *)(lVar8 + 0xb8) + 5) = iVar6 != 1;
    if (iVar1 == 0) {
      thunk_FUN_031e5338(lVar10);
    }
    FUN_0593e698(lVar12 + 0x20,0);
    bVar5 = FUN_05947b18();
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x23 + 0x90);
    *(byte *)(*(long *)(lVar8 + 0xb8) + 9) = bVar5 & 1;
    FUN_0593e698(lVar10 + 0x20,0);
    bVar5 = FUN_05947b18();
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    *(byte *)(*(long *)(lVar8 + 0xb8) + 10) = bVar5 & 1;
    bVar5 = FUN_06a76c38();
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    *(byte *)(*(long *)(lVar8 + 0xb8) + 0xb) = bVar5 & 1;
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar5 = **(byte **)(lVar8 + 0xb8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4(lVar10);
    }
    lVar8 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    *(byte *)(*(long *)(lVar8 + 0xb8) + 0xc) = bVar5 ^ 1;
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x30);
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 1) == '\0') {
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_031c09d4();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
      lVar8 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar8 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      lVar10 = *(long *)(unaff_x19 + 0x20);
      bVar4 = *(char *)(*(long *)(lVar8 + 0xb8) + 10) != '\0';
    }
    else {
      bVar4 = true;
    }
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    *(bool *)(*(long *)(lVar8 + 0xb8) + 0xd) = bVar4;
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 3) == '\0') {
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_031c09d4();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x48);
      lVar8 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar8 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      lVar10 = *(long *)(unaff_x19 + 0x20);
      bVar4 = *(char *)(*(long *)(lVar8 + 0xb8) + 2) != '\0';
    }
    else {
      bVar4 = true;
    }
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    *(bool *)(*(long *)(lVar8 + 0xb8) + 0xe) = bVar4;
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x50);
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar5 = *(byte *)(*(long *)(lVar8 + 0xb8) + 0xc);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4(lVar10);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x58);
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x19 + 0x20);
    bVar2 = *(byte *)(*(long *)(lVar8 + 0xb8) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_031c09d4(lVar10);
    }
    lVar8 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    *(byte *)(*(long *)(lVar8 + 0xb8) + 0xc) = bVar2 | bVar5;
    uVar9 = (**(code **)(*unaff_x20 + 0x3c8))();
    if ((uVar9 & 1) == 0) {
      bVar5 = 0;
    }
    else {
      uVar11 = (**(code **)(*unaff_x20 + 0x448))();
      uVar13 = *(undefined8 *)PTR_DAT_070f5480;
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(unaff_x23 + 0xe0));
      }
      uVar13 = FUN_0593e698(uVar13,0);
      bVar5 = FUN_05947b18(uVar11,uVar13,0);
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    puVar3 = PTR_DAT_070f1600;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    lVar10 = *(long *)(unaff_x23 + 0xe0);
    uVar11 = *(undefined8 *)puVar3;
    iVar6 = *(int *)(lVar10 + 0xe4);
    *(byte *)(*(long *)(lVar8 + 0xb8) + 0x10) = bVar5 & 1;
    if (iVar6 == 0) {
      thunk_FUN_031e5338(lVar10);
    }
    plVar7 = (long *)FUN_0593e698(uVar11,0);
    if (plVar7 != (long *)0x0) {
      bVar5 = (**(code **)(*plVar7 + 0x2a8))();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4(lVar8);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      *(byte *)(*(long *)(lVar8 + 0xb8) + 0xf) = bVar5 & 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


