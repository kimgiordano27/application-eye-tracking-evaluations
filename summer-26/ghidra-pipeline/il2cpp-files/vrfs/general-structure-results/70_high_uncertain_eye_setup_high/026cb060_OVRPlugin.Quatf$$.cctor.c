/*
FUNCTION_NAME: OVRPlugin.Quatf$$.cctor
ENTRY_POINT: 026cb060
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf___cctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x26;
  long in_stack_00000008;
  
  uVar2 = FUN_02cad608(param_1,*(undefined8 *)PTR_DAT_06d90088,0);
  puVar1 = PTR_DAT_06dc26f0;
  if (in_stack_00000008 != 0) {
    iVar3 = FUN_02cad608(in_stack_00000008,*(undefined8 *)PTR_DAT_06e604a0,0);
    lVar5 = *(long *)puVar1;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x110);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar5);
    }
    uVar8 = FUN_031c8668(uVar8,0);
    if (in_stack_00000008 != 0) {
      lVar5 = FUN_02cab2b8(in_stack_00000008,*(undefined8 *)PTR_DAT_06dae300,uVar8,0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_015c2790(lVar9);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_015d0480(lVar5,lVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(lVar5,lVar9);
        }
      }
      *(long *)(unaff_x19 + 0x30) = lVar4;
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_015c2790(lVar9);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_015d0480(lVar5,lVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(lVar5,lVar9);
        }
      }
      thunk_FUN_01656ef8((long *)(unaff_x19 + 0x30),lVar4);
      if (iVar3 == 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x10),0);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 8))();
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar8 = FUN_031c8668(uVar8,0);
        if (in_stack_00000008 == 0) goto LAB_026cb310;
        lVar5 = FUN_02cab2b8(in_stack_00000008,*(undefined8 *)PTR_DAT_06df8b20,uVar8,0);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_015c2790(lVar9);
        }
        if (lVar5 == 0) {
          FUN_031dba18(0x10,0);
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar4 = thunk_FUN_015d0480(lVar5,lVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(lVar5,lVar9);
        }
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar7 = 0;
          plVar10 = (long *)(lVar4 + 0x20);
          do {
            uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
            if (uVar6 <= uVar7) {
LAB_026cb30c:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            if (*plVar10 == 0) {
              FUN_031dba18(0x11,0);
              uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
            }
            if (uVar6 <= uVar7) goto LAB_026cb30c;
            plVar10 = plVar10 + 2;
            (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)*(int *)(lVar4 + 0x18));
        }
      }
      *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar5 = FUN_03f038c8(0);
      if (lVar5 != 0) {
        FUN_04d772fc();
        return;
      }
    }
  }
LAB_026cb310:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


