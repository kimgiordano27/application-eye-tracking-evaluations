/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$StartSpaceMap
ENTRY_POINT: 06dfe268
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dfe660) */
/* WARNING: Removing unreachable block (ram,0x06dfe72c) */

undefined8 Meta_XR_MRUtilityKit_SpaceMapGPU__StartSpaceMap(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long lVar18;
  undefined8 in_stack_00000028;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x648));
  FUN_03c8f898(PTR_DAT_08e91ce0);
  FUN_03c8f898(PTR_DAT_08e86650);
  FUN_03c8f898(PTR_DAT_08e7ebe8);
  FUN_03c8f898(PTR_DAT_08e92470);
  FUN_03c8f898(PTR_DAT_08e92478);
  FUN_03c8f898(PTR_DAT_08e92448);
  *(undefined1 *)(unaff_x19 + 0xec4) = 1;
  lVar8 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_07145224(lVar8,0);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x1c) = unaff_w20;
    puVar6 = PTR_DAT_08e92470;
    puVar5 = PTR_DAT_08e92458;
    puVar4 = PTR_DAT_08e86648;
    puVar3 = PTR_DAT_08e69e98;
    puVar2 = PTR_DAT_08e69638;
    if (unaff_x21 == (long *)0x0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80470);
      uVar11 = thunk_FUN_03cf5234();
      uVar15 = thunk_FUN_03ce5214(PTR_DAT_08e823e0);
      FUN_0705a2f8(uVar11,uVar15,0);
      uVar15 = thunk_FUN_03ce5214(PTR_DAT_08e92480);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar11,uVar15);
    }
    lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e86650);
    FUN_05ac8e98(lVar9,*(undefined8 *)puVar4);
    plVar10 = (long *)(lVar8 + 0x10);
    *plVar10 = lVar9;
    thunk_FUN_03d233cc(plVar10,lVar9);
    uVar11 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
    FUN_07064478(uVar11,lVar8,*(undefined8 *)puVar6,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    puVar2 = PTR_DAT_08e92460;
    FUN_071666d4(&stack0x00000010,&stack0x00000028,uVar11,0);
    lVar9 = *unaff_x21;
    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06dfe3cc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06dfe3cc:
    uVar7 = (*(code *)*puVar12)();
    *(undefined4 *)(lVar8 + 0x18) = uVar7;
    *(uint *)(lVar8 + 0x1c) =
         *(uint *)(lVar8 + 0x1c) & ((int)*(uint *)(lVar8 + 0x1c) >> 0x1f ^ 0xffffffffU);
    lVar9 = *unaff_x21;
    uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06dfe430;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06dfe430:
    plVar13 = (long *)(*(code *)*puVar12)();
    puVar4 = PTR_DAT_08e92468;
    puVar3 = PTR_DAT_08e7ebe8;
    puVar2 = PTR_DAT_08e6a290;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar1 = (long *)(lVar8 + 0x20);
    do {
      lVar9 = *plVar13;
      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06dfe4b4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar2,0);
LAB_06dfe4b4:
      uVar16 = (*(code *)*puVar12)(plVar13,puVar12[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto LAB_06dfe654;
        lVar9 = *plVar13;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar16 == 0) goto LAB_06dfe62c;
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_06dfe614;
      }
      lVar9 = *plVar13;
      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06dfe510;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar4,0);
LAB_06dfe510:
      lVar9 = (*(code *)*puVar12)(plVar13,puVar12[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar16 = FUN_0717850c(lVar9,0);
      if ((uVar16 & 1) == 0) {
        lVar18 = *plVar1;
        if (lVar18 == 0) {
          lVar18 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e92450);
          System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                    (lVar18,lVar8,*(undefined8 *)PTR_DAT_08e92478,0);
          *plVar1 = lVar18;
          thunk_FUN_03d233cc(plVar1,lVar18);
        }
        uVar11 = in_stack_00000028;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (DAT_09411ba7 == '\0') {
          FUN_03c8f898(puVar3);
          DAT_09411ba7 = '\x01';
        }
        lVar14 = *(long *)puVar3;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar14 = *(long *)puVar3;
        }
        FUN_0717fddc(lVar9,lVar18,uVar11,0x80000,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
      }
      else {
        *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + -1;
      }
    } while( true );
  }
  goto LAB_06dfe6dc;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_06dfe614:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_06dfe648;
    }
  }
LAB_06dfe62c:
  puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e6a288,0);
LAB_06dfe648:
  (*(code *)*puVar12)(plVar13,puVar12[1]);
LAB_06dfe654:
  if ((*plVar10 != 0) && (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 != 0)) {
    uVar16 = FUN_0717850c(lVar9,0);
    if (((uVar16 & 1) == 0) && (*(int *)(lVar8 + 0x18) < *(int *)(lVar8 + 0x1c))) {
      if (*plVar10 == 0) goto LAB_06dfe6dc;
      FUN_05ac913c(*plVar10,1,*(undefined8 *)PTR_DAT_08e866f8);
    }
    if (*plVar10 != 0) {
      return *(undefined8 *)(*plVar10 + 0x10);
    }
  }
LAB_06dfe6dc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


