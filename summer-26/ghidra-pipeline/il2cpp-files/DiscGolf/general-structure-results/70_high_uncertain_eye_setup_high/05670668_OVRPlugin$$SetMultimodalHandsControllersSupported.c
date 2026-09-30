/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 05670668
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05670844) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin__SetMultimodalHandsControllersSupported(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 in_w8;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar13;
  ulong uStack0000000000000010;
  long *plStack0000000000000018;
  
  *(undefined1 *)(unaff_x21 + 0x651) = in_w8;
  puVar2 = PTR_DAT_06a0f1a0;
  uStack0000000000000010 = 0;
  plStack0000000000000018 = (long *)0x0;
  if (((*(byte *)(unaff_x20 + 0x40) >> 1 & 1) != 0) && (*(int *)(unaff_x19 + 0x28) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plStack0000000000000018 = (long *)FUN_0564de84(10,0);
    uVar1 = *(undefined4 *)(unaff_x20 + 0xc0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    puVar4 = (undefined4 *)
             FUN_0564e60c(uVar1,(undefined1 *)((long)register0x00000008 + 0x14),&stack0x00000010,0);
    puVar3 = System_Collections_Generic_List<int>_TypeInfo;
    puVar2 = System_Collections_Generic_List<Instruction>_TypeInfo;
    if (*(int *)(unaff_x19 + 0x28) - 1U < uStack0000000000000010._4_4_) {
      uVar13 = 0;
      do {
        uVar5 = FUN_04df87e4(*(undefined8 *)(unaff_x20 + 0xe8),*puVar4,*(undefined8 *)puVar2);
        if ((uVar5 & 1) != 0) {
          lVar6 = FUN_04df8550(*(undefined8 *)(unaff_x20 + 0xe8),*puVar4,*(undefined8 *)puVar3);
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar5 = 0;
            uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            do {
              if (uVar10 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              lVar11 = *(long *)(lVar6 + 0x20 + uVar5 * 8);
              plVar7 = *(long **)(lVar11 + 0x28);
              if (plVar7 == (long *)0x0) {
                uVar8 = FUN_0634bb04(*(undefined8 *)(lVar11 + 0x20),0);
                FUN_0569f368(uVar8,puVar4 + 0x23,0);
              }
              else {
                (**(code **)(*plVar7 + 0x1f8))
                          (plVar7,puVar4 + 0x23,*(undefined8 *)(*plVar7 + 0x200));
              }
              uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
        }
        uVar13 = uVar13 + 1;
        puVar4 = (undefined4 *)((uStack0000000000000010 & 0xffffffff) + (long)puVar4);
      } while (uVar13 < *(uint *)(unaff_x19 + 0x28));
    }
    plVar7 = plStack0000000000000018;
    if (plStack0000000000000018 != (long *)0x0) {
      lVar6 = *plStack0000000000000018;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_069fbff0) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05670810;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c(plStack0000000000000018,*(long *)PTR_DAT_069fbff0,0);
LAB_05670810:
      (*(code *)*puVar9)(plVar7,puVar9[1]);
    }
  }
  return;
}


