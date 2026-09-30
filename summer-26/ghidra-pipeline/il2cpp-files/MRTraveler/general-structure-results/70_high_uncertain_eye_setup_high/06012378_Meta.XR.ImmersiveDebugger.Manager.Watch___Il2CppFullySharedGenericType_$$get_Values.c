/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<__Il2CppFullySharedGenericType>$$get_Values
ENTRY_POINT: 06012378
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__get_Values
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  
  if (*(long *)(param_1 + 0x40) != in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fecc();
  }
  thunk_FUN_03cf5388();
  in_stack_00000008 = *unaff_x21;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  thunk_FUN_03cf4e64(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000008);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  thunk_FUN_03cf4e64(**(undefined8 **)(lVar3 + 0xc0));
  puVar1 = PTR_DAT_08e80978;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e80978) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06012444;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06012444:
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) != 0) {
    in_stack_00000008 = unaff_x21[1];
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000008);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06012504;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06012504:
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) != 0) {
      in_stack_00000008 = unaff_x21[2];
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244();
      }
      thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),&stack0x00000008);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244(lVar3);
      }
      thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_060125c4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_060125c4:
      uVar5 = (*(code *)*puVar4)();
      if ((uVar5 & 1) != 0) {
        in_stack_00000008 = unaff_x21[3];
        lVar3 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03cf1244();
        }
        thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20),&stack0x00000008);
        lVar3 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03cf1244(lVar3);
        }
        thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
        lVar3 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_060126a8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_060126a8:
        uVar2 = (*(code *)*puVar4)();
        goto LAB_0601267c;
      }
    }
  }
  uVar2 = 0;
LAB_0601267c:
  return uVar2 & 1;
}


