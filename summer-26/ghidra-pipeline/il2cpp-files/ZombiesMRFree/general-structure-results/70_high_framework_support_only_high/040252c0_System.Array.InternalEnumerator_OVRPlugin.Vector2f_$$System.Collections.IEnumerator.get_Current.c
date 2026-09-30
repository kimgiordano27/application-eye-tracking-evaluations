/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 040252c0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04025618) */

void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 in_w8;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xc53) = in_w8;
  memset(&stack0x00000450,0,0x220);
  memset(unaff_x21,0,0x230);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  iVar3 = FUN_03c3510c();
  *unaff_x21 = iVar3;
  if (iVar3 < 2) {
    uVar7 = 0;
    unaff_x21[0x8a] = 0;
    unaff_x21[0x8b] = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    uVar7 = FUN_02fe9340(lVar4,iVar3 + -1);
    *(undefined8 *)(unaff_x21 + 0x8a) = uVar7;
  }
  thunk_FUN_03048534(unaff_x21 + 0x8a,uVar7);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_040253d8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02feb5b8();
LAB_040253d8:
  puVar1 = PTR_DAT_06f70b30;
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_06f70b38;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  iVar3 = 0;
  do {
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04025458;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)puVar2,0);
LAB_04025458:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 == 0) goto LAB_040255bc;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_040254dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02feb5b8(plVar6,lVar4,0);
LAB_040254dc:
    (*(code *)*puVar5)(&stack0x00000230,plVar6,puVar5[1]);
    memcpy(&stack0x00000450,&stack0x00000230,0x220);
    if (iVar3 == 0) {
      memcpy(unaff_x21 + 2,&stack0x00000450,0x220);
      thunk_FUN_03048534(unaff_x21 + 8,0);
    }
    else {
      lVar4 = *(long *)(unaff_x21 + 0x8a);
      memcpy(&stack0x00000230,&stack0x00000450,0x220);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      memcpy(&stack0x00000010,&stack0x00000230,0x220);
      if (*(uint *)(lVar4 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar4 = lVar4 + (long)(int)(iVar3 - 1U) * 0x220;
      memcpy((void *)(lVar4 + 0x20),&stack0x00000010,0x220);
      thunk_FUN_03048534(lVar4 + 0x38,0);
    }
    iVar3 = iVar3 + 1;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_040255d8;
    }
  }
LAB_040255bc:
  puVar5 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)puVar1,0);
LAB_040255d8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


