/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 02c1c838
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c1cc30) */
/* WARNING: Removing unreachable block (ram,0x02c1ce70) */

undefined8 OVRPlugin__GetNodePoseStateAtTime(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
code_r0x02c1c838:
  do {
    lVar3 = (*(code *)*param_1)();
    if (lVar3 == 0) {
      thunk_FUN_01851c08(PTR_DAT_0380b860);
      uVar4 = thunk_FUN_01861bbc();
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
      FUN_02b0d540(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,uVar5);
    }
    lVar3 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02c1c7dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c1c7dc:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02c1cc24;
      lVar3 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_02c1c8d4;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          param_1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x02c1c838;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    param_1 = (undefined8 *)FUN_0185dba8();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02c1cc18;
    }
  }
LAB_02c1c8d4:
  puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c1cc18:
  (*(code *)*puVar2)();
LAB_02c1cc24:
  lVar3 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02c1cc80;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c1cc80:
  uVar1 = (*(code *)*puVar2)();
  uVar4 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,uVar1);
  lVar3 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_02c1ccf8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c1ccf8:
  (*(code *)*puVar2)();
  return uVar4;
}


