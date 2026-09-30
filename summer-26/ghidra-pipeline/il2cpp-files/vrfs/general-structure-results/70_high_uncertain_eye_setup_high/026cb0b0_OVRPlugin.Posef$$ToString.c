/*
FUNCTION_NAME: OVRPlugin.Posef$$ToString
ENTRY_POINT: 026cb0b0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef__ToString(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  uVar5 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x110);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc(param_1);
  }
  FUN_031c8668(uVar5,0);
  if (unaff_x23 != 0) {
    lVar1 = FUN_02cab2b8();
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_015c2790(lVar6);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_015d0480(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar1,lVar6);
      }
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_015c2790(lVar6);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_015d0480(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar1,lVar6);
      }
    }
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x30),lVar2);
    if (unaff_w22 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 8))();
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar5 = FUN_031c8668(uVar5,0);
      if (in_stack_00000008 == 0) goto LAB_026cb310;
      lVar1 = FUN_02cab2b8(in_stack_00000008,*(undefined8 *)PTR_DAT_06df8b20,uVar5,0);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_015c2790(lVar6);
      }
      if (lVar1 == 0) {
        FUN_031dba18(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar2 = thunk_FUN_015d0480(lVar1,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar1,lVar6);
      }
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar4 = 0;
        plVar7 = (long *)(lVar2 + 0x20);
        do {
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          if (uVar3 <= uVar4) {
LAB_026cb30c:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          if (*plVar7 == 0) {
            FUN_031dba18(0x11,0);
            uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          }
          if (uVar3 <= uVar4) goto LAB_026cb30c;
          plVar7 = plVar7 + 2;
          (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar1 = FUN_03f038c8(0);
    if (lVar1 != 0) {
      FUN_04d772fc();
      return;
    }
  }
LAB_026cb310:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


