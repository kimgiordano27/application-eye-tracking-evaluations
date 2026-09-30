/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 052b4070
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_Collections_IEnumerator_get_Current
               (void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar8;
  long unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined1 unaff_w28;
  float fVar9;
  
code_r0x052b4070:
  if ((*(long *)(unaff_x23 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(unaff_x23 + 0x10) + 0xa8), lVar3 != 0)) {
    FUN_06741ea8(lVar3,0,0);
    do {
      fVar9 = (float)FUN_066d1690(0);
      if ((*(float *)(unaff_x20 + 0x28) < fVar9 - *(float *)(unaff_x23 + 0x18)) &&
         (*(char *)(unaff_x23 + 0x4c) == '\0')) {
        if (*(long *)(unaff_x20 + 0x60) == 0) break;
        FUN_04759f10(*(long *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x23 + 0x10),*unaff_x26);
        *(undefined1 *)(unaff_x23 + 0x4c) = unaff_w28;
      }
      uVar4 = FUN_052b6a40();
      if ((uVar4 & 1) == 0) {
        lVar3 = *(long *)(unaff_x20 + 0x80);
        if (lVar3 == 0) break;
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) break;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = unaff_x23;
          thunk_FUN_02f411dc(plVar6,unaff_x23);
        }
        else {
          FUN_03fd0c9c(lVar3,unaff_x23,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        if (*(char *)(unaff_x23 + 0x4c) != '\0') {
          if (*(long *)(unaff_x20 + 0x68) == 0) break;
          FUN_04759f10(*(long *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x23 + 0x10),*unaff_x26);
          *(undefined1 *)(unaff_x23 + 0x4c) = 0;
        }
        plVar6 = (long *)(unaff_x23 + 0x10);
        if ((*plVar6 == 0) || (lVar3 = *(long *)(*plVar6 + 0xa8), lVar3 == 0)) break;
        FUN_06741ea8(lVar3,1,0);
        *plVar6 = 0;
        thunk_FUN_02f411dc(plVar6,0);
      }
      do {
        unaff_w22 = unaff_w22 + 1;
        if (*(int *)(unaff_x21 + 0x18) <= unaff_w22) {
          lVar3 = *(long *)(unaff_x20 + 0x80);
          if (lVar3 == 0) goto LAB_052b4288;
          iVar8 = 0;
          goto LAB_052b41ac;
        }
        unaff_x23 = FUN_03fd09cc();
        if (unaff_x23 == 0) goto LAB_052b4288;
        iVar1 = *(int *)(unaff_x23 + 0x1c);
        iVar8 = iVar1 + 1;
        *(int *)(unaff_x23 + 0x1c) = iVar8;
        if (iVar1 == 0) goto code_r0x052b4070;
      } while (iVar8 < 3);
    } while( true );
  }
  goto LAB_052b4288;
  while( true ) {
    FUN_03fd09cc(lVar3,iVar8,*unaff_x25);
    FUN_03fd212c();
    lVar3 = *(long *)(unaff_x20 + 0x80);
    iVar8 = iVar8 + 1;
    if (lVar3 == 0) break;
LAB_052b41ac:
    if (*(int *)(lVar3 + 0x18) <= iVar8) {
      if ((0 < unaff_w24) && (*(int *)(unaff_x21 + 0x18) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar4 = FUN_066cd30c();
        if ((uVar4 & 1) != 0) {
          if (unaff_x19 == 0) break;
          *(undefined1 *)(unaff_x19 + 0x2f1) = 1;
        }
      }
      lVar3 = *(long *)(unaff_x20 + 0x80);
      if (lVar3 != 0) {
        iVar8 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar8) {
          FUN_05624da8(*(undefined8 *)(lVar3 + 0x10),0,iVar8,0);
          return;
        }
        return;
      }
      break;
    }
  }
LAB_052b4288:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


