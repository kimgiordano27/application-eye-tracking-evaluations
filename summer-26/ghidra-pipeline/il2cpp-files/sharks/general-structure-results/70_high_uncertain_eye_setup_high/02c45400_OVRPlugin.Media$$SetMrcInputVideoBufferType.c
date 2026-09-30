/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcInputVideoBufferType
ENTRY_POINT: 02c45400
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4562c) */
/* WARNING: Removing unreachable block (ram,0x02c455c8) */
/* WARNING: Removing unreachable block (ram,0x02c45638) */
/* WARNING: Removing unreachable block (ram,0x02c455f0) */

void OVRPlugin_Media__SetMrcInputVideoBufferType(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  
  puVar4 = (undefined8 *)FUN_0185dba8();
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = PTR_DAT_0380c6e0;
  puVar2 = PTR_DAT_037f3298;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  do {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02c45484;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)puVar2,0);
LAB_02c45484:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_02c455b8;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_02c45590;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02c454e0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)puVar3,0);
LAB_02c454e0:
    lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(lVar6 + 0x38);
    thunk_FUN_0181f594();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar6 + 0x38), thunk_FUN_0181f594(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar6 = *(long *)(lVar6 + 0x48);
      thunk_FUN_0181f594();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar6 = *(long *)(lVar6 + 0x20);
      thunk_FUN_0181f594();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02c44bc4(lVar6,0,0);
      FUN_02c449e8();
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02c455ac;
    }
  }
LAB_02c45590:
  puVar4 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)PTR_DAT_037f3288,0);
LAB_02c455ac:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02c455b8:
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_0184c01c();
  }
  thunk_FUN_0181f594();
  *unaff_x19 = 0;
  thunk_FUN_0188fd20();
  return;
}


