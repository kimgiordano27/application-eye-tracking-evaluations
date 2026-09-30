/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<RenderTreeManager.VisualChangesProcessor.EntryProcessingInfo>
ENTRY_POINT: 0382dea4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0382e114) */

void System_Array__InternalArray__ICollection_CopyTo<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x20;
  
  FUN_0382e170();
  if (unaff_x20 == (long *)0x0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar7 = thunk_FUN_0367fe20();
    uVar8 = thunk_FUN_036aa1c8(PTR_DAT_079fb728);
    FUN_05d7e1a0(uVar7,uVar8,0);
    uVar8 = thunk_FUN_036aa1c8(PTR_DAT_079fb730);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar7,uVar8);
  }
  lVar9 = *unaff_x20;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_079f49a0) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation_Builder_Entry>
        ;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30();
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar3 = PTR_DAT_079f49a8;
  puVar1 = PTR_DAT_079f4598;
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_079f4610;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar10 = *plVar5;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0382df8c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar5,lVar9,0);
LAB_0382df8c:
    uVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar11 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_0367fd24(plVar5,*(undefined8 *)puVar1);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar5;
      lVar9 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_0382e07c;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar10 = *plVar5;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0382dff4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar5,lVar9,1);
LAB_0382dff4:
    plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar6);
    }
    FUN_0382e230();
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == lVar9) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0382e098;
    }
  }
LAB_0382e07c:
  puVar4 = (undefined8 *)FUN_0367cd30(plVar5,lVar9,0);
LAB_0382e098:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


