/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Values
ENTRY_POINT: 056a3e44
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Values(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 in_w8;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined2 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  byte bStack000000000000000c;
  undefined1 in_stack_00000010;
  byte bStack0000000000000014;
  undefined1 in_stack_00000018;
  undefined2 uStack000000000000001c;
  
  *(undefined1 *)(unaff_x23 + 0x833) = in_w8;
  if (unaff_x22 == (long *)0x0) {
    uVar7 = 1;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    if (*unaff_x22 != lVar4) {
      uStack000000000000001c = *unaff_x21;
      lVar4 = FUN_031b6344(*(undefined8 *)(unaff_x20 + 0x20));
      uVar7 = thunk_FUN_037784fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8),&stack0x0000001c);
      plVar8 = (long *)thunk_FUN_0374b7cc(uVar7,0);
      FUN_031a5e18();
      uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07d9a650);
      uVar7 = System_TimeZoneInfo__GetUtcOffset(uVar9,uVar7,0);
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar9 = thunk_FUN_037788cc();
      uVar10 = thunk_FUN_037a15ac(PTR_DAT_07d98af8);
      FUN_061a1bb8(uVar9,uVar7,uVar10,0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar9);
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    pbVar5 = (byte *)thunk_FUN_03778a20();
    in_stack_00000018 = *(undefined1 *)unaff_x21;
    bVar1 = *pbVar5;
    bVar2 = pbVar5[1];
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    thunk_FUN_037784fc(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000018);
    bStack0000000000000014 = bVar1 & 1;
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678(lVar4);
    }
    thunk_FUN_037784fc(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000014);
    puVar3 = PTR_DAT_07d9a648;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar4 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d9a648) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_056a3f8c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c();
LAB_056a3f8c:
    uVar7 = (*(code *)*puVar6)();
    if ((int)uVar7 == 0) {
      in_stack_00000010 = *(undefined1 *)((long)unaff_x21 + 1);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03775678();
      }
      thunk_FUN_037784fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000010);
      bStack000000000000000c = bVar2 & 1;
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03775678(lVar4);
      }
      thunk_FUN_037784fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x0000000c);
      lVar4 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_056a4050;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c();
LAB_056a4050:
      uVar7 = (*(code *)*puVar6)();
    }
  }
  return uVar7;
}


