/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 052b4038
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


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_Collections_IEnumerator_Reset
               (void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar9;
  int unaff_w24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  float fVar10;
  
  do {
    lVar3 = FUN_03fd09cc();
    if (lVar3 == 0) goto LAB_052b4288;
    iVar1 = *(int *)(lVar3 + 0x1c);
    iVar9 = iVar1 + 1;
    *(int *)(lVar3 + 0x1c) = iVar9;
    if (iVar1 == 0) {
      if ((*(long *)(lVar3 + 0x10) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0xa8), lVar4 == 0)) goto LAB_052b4288;
      FUN_06741ea8(lVar4,0,0);
LAB_052b408c:
      fVar10 = (float)FUN_066d1690(0);
      if ((*(float *)(unaff_x20 + 0x28) < fVar10 - *(float *)(lVar3 + 0x18)) &&
         (*(char *)(lVar3 + 0x4c) == '\0')) {
        if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_052b4288;
        FUN_04759f10(*(long *)(unaff_x20 + 0x60),*(undefined8 *)(lVar3 + 0x10),*unaff_x26);
        *(undefined1 *)(lVar3 + 0x4c) = 1;
      }
      uVar5 = FUN_052b6a40();
      if ((uVar5 & 1) == 0) {
        lVar4 = *(long *)(unaff_x20 + 0x80);
        if (lVar4 == 0) goto LAB_052b4288;
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar8 = *unaff_x27;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_052b4288;
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
          *plVar7 = lVar3;
          thunk_FUN_02f411dc(plVar7,lVar3);
        }
        else {
          FUN_03fd0c9c(lVar4,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (*(char *)(lVar3 + 0x4c) != '\0') {
          if (*(long *)(unaff_x20 + 0x68) == 0) goto LAB_052b4288;
          FUN_04759f10(*(long *)(unaff_x20 + 0x68),*(undefined8 *)(lVar3 + 0x10),*unaff_x26);
          *(undefined1 *)(lVar3 + 0x4c) = 0;
        }
        plVar7 = (long *)(lVar3 + 0x10);
        if ((*plVar7 == 0) || (lVar3 = *(long *)(*plVar7 + 0xa8), lVar3 == 0)) goto LAB_052b4288;
        FUN_06741ea8(lVar3,1,0);
        *plVar7 = 0;
        thunk_FUN_02f411dc(plVar7,0);
      }
    }
    else if (2 < iVar9) goto LAB_052b408c;
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 < *(int *)(unaff_x21 + 0x18));
  lVar3 = *(long *)(unaff_x20 + 0x80);
  if (lVar3 != 0) {
    iVar9 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar9) {
        if ((0 < unaff_w24) && (*(int *)(unaff_x21 + 0x18) == 0)) {
          if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar5 = FUN_066cd30c();
          if ((uVar5 & 1) != 0) {
            if (unaff_x19 == 0) break;
            *(undefined1 *)(unaff_x19 + 0x2f1) = 1;
          }
        }
        lVar3 = *(long *)(unaff_x20 + 0x80);
        if (lVar3 != 0) {
          iVar9 = *(int *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (0 < iVar9) {
            FUN_05624da8(*(undefined8 *)(lVar3 + 0x10),0,iVar9,0);
            return;
          }
          return;
        }
        break;
      }
      FUN_03fd09cc(lVar3,iVar9,*unaff_x25);
      FUN_03fd212c();
      lVar3 = *(long *)(unaff_x20 + 0x80);
      iVar9 = iVar9 + 1;
    } while (lVar3 != 0);
  }
LAB_052b4288:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


