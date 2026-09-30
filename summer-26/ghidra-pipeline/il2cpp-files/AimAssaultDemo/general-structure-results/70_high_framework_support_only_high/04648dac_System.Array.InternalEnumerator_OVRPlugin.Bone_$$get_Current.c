/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$get_Current
ENTRY_POINT: 04648dac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04648f20) */

void System_Array_InternalEnumerator<OVRPlugin_Bone>__get_Current(void)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  long lVar2;
  uint in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x04648dac:
  if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  memcpy((void *)((long)unaff_x25 + (ulong)*(uint *)(*unaff_x25 + 0x104) * (long)(int)in_w8 + 0x20),
         unaff_x22,unaff_x21);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
  }
  if (*(uint *)(unaff_x25 + 3) <= in_w8) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  FUN_0373b4c8(lVar2,(long)unaff_x25 +
                     (ulong)*(uint *)(*unaff_x25 + 0x104) * (long)(int)in_w8 + 0x20);
  in_w8 = unaff_w27;
  do {
    unaff_w27 = in_w8 + 1;
    lVar2 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 04648e68 to 04748e6b has its CatchHandler @ 04648e70 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04648cac;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_04648cac:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x24 == (long *)0x0) goto LAB_04648ed4;
      lVar2 = *unaff_x24;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_04648eac;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_04648e94;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678(lVar2);
    }
    lVar3 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_04648d30;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_0377596c();
LAB_04648d30:
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_w27 != 0) break;
    memcpy(unaff_x22,unaff_x23,unaff_x21);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    FUN_0373b540();
    in_w8 = unaff_w27;
  } while( true );
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  puVar1 = (undefined8 *)thunk_FUN_03799158();
  unaff_x25 = (long *)*puVar1;
  memcpy(unaff_x22,unaff_x23,unaff_x21);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  in_CY = *(uint *)(unaff_x25 + 3) <= in_w8;
  goto code_r0x04648dac;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_04648e94:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04648ec8;
    }
  }
LAB_04648eac:
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_04648ec8:
  (*(code *)*puVar1)();
LAB_04648ed4:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


