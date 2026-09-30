/*
FUNCTION_NAME: UniGLTF.JointsAccessor.Getter$$.ctor
ENTRY_POINT: 02f8b38c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f8b4ac) */
/* WARNING: Removing unreachable block (ram,0x02f8b4c0) */

int UniGLTF_JointsAccessor_Getter___ctor(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int in_w9;
  ulong uVar6;
  int *piVar7;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
code_r0x02f8b38c:
  puVar3 = (undefined8 *)(param_1 + (long)in_w9 * 0x10 + 0x138);
  do {
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar4 = (long *)plVar4[3];
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    unaff_w20 = iVar2 + unaff_w20;
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02f8b334;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec();
LAB_02f8b334:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01a89d6c();
      if (plVar4 == (long *)0x0) goto code_r0x02f8b464;
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_02f8b438;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          in_w9 = *piVar7 + 1;
          goto code_r0x02f8b38c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02f8b454;
    }
  }
LAB_02f8b438:
  puVar3 = (undefined8 *)FUN_01a472ec(plVar4,*unaff_x24,0);
LAB_02f8b454:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
code_r0x02f8b464:
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return unaff_w20;
}


