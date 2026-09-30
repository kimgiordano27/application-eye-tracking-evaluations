/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$HookGetInstanceProcAddr
ENTRY_POINT: 020f9f68
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_MetaXRFeature__HookGetInstanceProcAddr(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x21;
  long *plVar8;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  lVar3 = *unaff_x24;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *unaff_x24;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    uVar4 = FUN_04278cb0(lVar3,*(undefined4 *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_06e641e0);
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar3);
      lVar3 = *unaff_x24;
    }
    if ((uVar4 & 1) == 0) {
      plVar8 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x10);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
      uVar5 = thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df4958,(long)&stack0x00000008 + 4);
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06e0ec58) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_020fa088;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)PTR_DAT_06e0ec58,3);
LAB_020fa088:
        uVar4 = (*(code *)*puVar6)(plVar8,uVar5,puVar6[1]);
        puVar1 = PTR_DAT_06da2688;
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar4 = FUN_020fa2a0();
          return uVar4;
        }
        lVar3 = *unaff_x24;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar3 = *unaff_x24;
        }
        uVar5 = **(undefined8 **)(lVar3 + 0xb8);
        lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_06d9b2b0;
        if (lVar3 != 0) {
          FUN_03beb478();
          iVar2 = FUN_03364bec(uVar5,lVar3,*(undefined8 *)puVar1);
          lVar3 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar3 != 0) {
            if (iVar2 + 1U < *(uint *)(lVar3 + 0x18)) {
              return (ulong)*(uint *)(lVar3 + (long)(int)(iVar2 + 1U) * 4 + 0x20);
            }
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
        }
      }
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 != 0) {
        uVar4 = FUN_04278a08(lVar3,*(undefined4 *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_06e170f0
                            );
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


