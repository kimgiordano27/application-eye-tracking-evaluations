/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 03152f84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetAppCpuStartToGpuEndTime(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long *in_stack_00000008;
  
  thunk_FUN_01ad9084(PTR_DAT_03d802a0);
  thunk_FUN_01ad9084(PTR_DAT_03d802a8);
  thunk_FUN_01ad9084(PTR_DAT_03d802b0);
  thunk_FUN_01ad9084(PTR_DAT_03d802b8);
  thunk_FUN_01ad9084(PTR_DAT_03d802c0);
  thunk_FUN_01ad9084(StringLiteral_2240);
  thunk_FUN_01ad9084(PTR_DAT_03d802c8);
  thunk_FUN_01ad9084(PTR_DAT_03d802d0);
  thunk_FUN_01ad9084(PTR_DAT_03d802d8);
  thunk_FUN_01ad9084(PTR_DAT_03d802e0);
  thunk_FUN_01ad9084(PTR_DAT_03d802e8);
  thunk_FUN_01ad9084(PTR_DAT_03d802f0);
  *(undefined1 *)(unaff_x21 + 0xff0) = 1;
  in_stack_00000008 = (long *)0x0;
  if (unaff_x19 == 0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar2 = FUN_025bc7b8();
    if ((uVar2 & 1) == 0) {
      lVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802d8);
      FUN_02b591b0(lVar3,*(undefined8 *)PTR_DAT_03d802d0);
      puVar1 = StringLiteral_2238;
      lVar4 = *(long *)StringLiteral_2238;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      uVar5 = thunk_FUN_01acfdbc();
      if (lVar4 != 0) {
        uVar2 = FUN_025bddd0(lVar4,uVar5,&stack0x00000008,*(undefined8 *)PTR_DAT_03d80298);
        plVar8 = in_stack_00000008;
        if ((in_stack_00000008 != (long *)0x0) && ((uVar2 & 1) != 0)) {
          lVar4 = *in_stack_00000008;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2240) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03153144;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)StringLiteral_2240,0);
LAB_03153144:
          uVar5 = (*(code *)*puVar6)(plVar8);
          uVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802b8);
          FUN_028b7004();
          uVar5 = FUN_01ebc520(uVar5,uVar7,*(undefined8 *)PTR_DAT_03d802a8);
          puVar1 = PTR_DAT_03d802f0;
          lVar4 = *(long *)PTR_DAT_03d802f0;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar4);
            lVar4 = *(long *)puVar1;
          }
          lVar10 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar10 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar4);
              lVar4 = *(long *)puVar1;
            }
            uVar7 = **(undefined8 **)(lVar4 + 0xb8);
            lVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802c0);
            FUN_028b6724(lVar10,uVar7,*(undefined8 *)PTR_DAT_03d802e8,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar8 = lVar10;
            thunk_FUN_01b4f09c(plVar8,lVar10);
          }
          uVar5 = FUN_01ec7bf0(uVar5,lVar10,*(undefined8 *)PTR_DAT_03d802b0);
          if (lVar3 == 0) goto LAB_031532dc;
          FUN_02b59bf0(lVar3,uVar5,*(undefined8 *)PTR_DAT_03d802c8);
        }
        lVar4 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802e0);
        FUN_03081994(lVar4,0);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = unaff_x19;
          thunk_FUN_01b4f09c();
          *(long *)(lVar4 + 0x18) = lVar3;
          thunk_FUN_01b4f09c((long *)(lVar4 + 0x18),lVar3);
          if (*(long *)(unaff_x20 + 0x10) != 0) {
            FUN_025bc5c4();
            return lVar4;
          }
        }
      }
    }
    else if (*(long *)(unaff_x20 + 0x10) != 0) {
      lVar3 = FUN_025bc544();
      return lVar3;
    }
  }
LAB_031532dc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


