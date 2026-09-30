/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 01d84958
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_EyeTextureArrayEnabled(long *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long lVar10;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long in_stack_00000058;
  
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(unaff_x24,unaff_x23);
    }
    lVar7 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == unaff_x23) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_01d849b0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348(param_1,unaff_x23,7);
LAB_01d849b0:
    uVar3 = (*(code *)*puVar4)(param_1,0,puVar4[1]);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x27) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    uVar1 = (uint)unaff_x27 + 1;
    *(undefined4 *)(unaff_x20 + unaff_x27 * 4 + 0x20) = uVar3;
    if (uVar1 == unaff_w22) {
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x2c8))();
      if (plVar5 == (long *)0x0) {
        if (unaff_w26 != 0) goto LAB_01d85298;
      }
      else {
        bVar2 = *(byte *)(*(long *)PTR_DAT_0234bdf8 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0234bdf8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0();
        }
        if (unaff_w26 != 0) {
          uVar6 = thunk_FUN_0105ce10();
          return uVar6;
        }
      }
      if (in_stack_00000058 != 0) {
        if (*(uint *)(in_stack_00000058 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (plVar5 != (long *)0x0) {
          thunk_FUN_0105cfb0(plVar5,*(undefined8 *)
                                     (in_stack_00000058 + (long)(int)unaff_w22 * 8 + 0x20));
          return 0;
        }
      }
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(in_stack_00000058 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    unaff_x27 = (long)(int)uVar1;
    unaff_x24 = *(long *)(in_stack_00000058 + unaff_x27 * 8 + 0x20);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar10 = *unaff_x25;
    lVar7 = thunk_FUN_0103ffe0(unaff_x24,lVar10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(unaff_x24,lVar10);
    }
    unaff_x23 = *unaff_x25;
    param_1 = (long *)thunk_FUN_0103ffe0(unaff_x24,unaff_x23);
  } while( true );
}


