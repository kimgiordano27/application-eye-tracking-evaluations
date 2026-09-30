/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$StartSpaceMap
ENTRY_POINT: 06dfe358
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dfe660) */
/* WARNING: Removing unreachable block (ram,0x06dfe72c) */

undefined8 Meta_XR_MRUtilityKit_SpaceMapGPU__StartSpaceMap(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  long lVar13;
  long *in_stack_00000008;
  undefined8 in_stack_00000028;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar2 = PTR_DAT_08e92460;
                    /* try { // try from 06dfe368 to 06efe447 has its CatchHandler @ 06dfe368
                       catch() { ... } // from try @ 06dfe368 with catch @ 06dfe368
                       catch() { ... } // from try @ 06dfe4d0 with catch @ 06dfe368
                       catch() { ... } // from try @ 06dfe514 with catch @ 06dfe368
                       catch() { ... } // from try @ 06dfe524 with catch @ 06dfe368
                       catch() { ... } // from try @ 06dfe560 with catch @ 06dfe368
                       catch() { ... } // from try @ 06dfe598 with catch @ 06dfe368 */
  FUN_071666d4(&stack0x00000010,&stack0x00000028);
  lVar10 = *unaff_x21;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x23) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06dfe3cc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06dfe3cc:
  uVar6 = (*(code *)*puVar7)();
  *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
  *(uint *)(unaff_x19 + 0x1c) =
       *(uint *)(unaff_x19 + 0x1c) & ((int)*(uint *)(unaff_x19 + 0x1c) >> 0x1f ^ 0xffffffffU);
  lVar10 = *unaff_x21;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06dfe430;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06dfe430:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar4 = PTR_DAT_08e92468;
  puVar3 = PTR_DAT_08e7ebe8;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar1 = (long *)(unaff_x19 + 0x20);
  do {
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06dfe4b4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar2,0);
LAB_06dfe4b4:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_06dfe654;
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_06dfe62c;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06dfe510;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar4,0);
LAB_06dfe510:
    lVar10 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar11 = FUN_0717850c(lVar10,0);
    if ((uVar11 & 1) == 0) {
      lVar13 = *plVar1;
      if (lVar13 == 0) {
        lVar13 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e92450);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  ();
        *plVar1 = lVar13;
        thunk_FUN_03d233cc(plVar1,lVar13);
      }
      uVar5 = in_stack_00000028;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (DAT_09411ba7 == '\0') {
        FUN_03c8f898(puVar3);
        DAT_09411ba7 = '\x01';
      }
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar9 = *(long *)puVar3;
      }
      FUN_0717fddc(lVar10,lVar13,uVar5,0x80000,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),0);
    }
    else {
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + -1;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06dfe648;
    }
  }
LAB_06dfe62c:
  puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e6a288,0);
LAB_06dfe648:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_06dfe654:
  if ((*in_stack_00000008 != 0) && (lVar10 = *(long *)(*in_stack_00000008 + 0x10), lVar10 != 0)) {
    uVar11 = FUN_0717850c(lVar10,0);
    if (((uVar11 & 1) == 0) && (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x19 + 0x1c))) {
      if (*in_stack_00000008 == 0) goto LAB_06dfe6dc;
      FUN_05ac913c(*in_stack_00000008,1,*(undefined8 *)PTR_DAT_08e866f8);
    }
    if (*in_stack_00000008 != 0) {
      return *(undefined8 *)(*in_stack_00000008 + 0x10);
    }
  }
LAB_06dfe6dc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


