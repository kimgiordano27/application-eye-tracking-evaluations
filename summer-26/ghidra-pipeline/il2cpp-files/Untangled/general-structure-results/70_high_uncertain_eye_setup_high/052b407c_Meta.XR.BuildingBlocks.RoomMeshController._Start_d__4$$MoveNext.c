/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$MoveNext
ENTRY_POINT: 052b407c
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
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
  
code_r0x052b407c:
  if (param_1 != 0) {
    FUN_06741ea8(param_1,0,0);
    do {
      fVar9 = (float)FUN_066d1690(0);
      if ((*(float *)(unaff_x20 + 0x28) < fVar9 - *(float *)(unaff_x23 + 0x18)) &&
         (*(char *)(unaff_x23 + 0x4c) == '\0')) {
        if (*(long *)(unaff_x20 + 0x60) == 0) break;
        FUN_04759f10(*(long *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x23 + 0x10),*unaff_x26);
        *(undefined1 *)(unaff_x23 + 0x4c) = unaff_w28;
      }
      uVar3 = FUN_052b6a40();
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(unaff_x20 + 0x80);
        if (lVar4 == 0) break;
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 == 0) break;
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = unaff_x23;
          thunk_FUN_02f411dc(plVar6,unaff_x23);
        }
        else {
          FUN_03fd0c9c(lVar4,unaff_x23,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        if (*(char *)(unaff_x23 + 0x4c) != '\0') {
          if (*(long *)(unaff_x20 + 0x68) == 0) break;
          FUN_04759f10(*(long *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x23 + 0x10),*unaff_x26);
          *(undefined1 *)(unaff_x23 + 0x4c) = 0;
        }
        plVar6 = (long *)(unaff_x23 + 0x10);
        if ((*plVar6 == 0) || (lVar4 = *(long *)(*plVar6 + 0xa8), lVar4 == 0)) break;
        FUN_06741ea8(lVar4,1,0);
        *plVar6 = 0;
        thunk_FUN_02f411dc(plVar6,0);
      }
      do {
        unaff_w22 = unaff_w22 + 1;
        if (*(int *)(unaff_x21 + 0x18) <= unaff_w22) {
          lVar4 = *(long *)(unaff_x20 + 0x80);
          if (lVar4 == 0) goto LAB_052b4288;
          iVar8 = 0;
          goto LAB_052b41ac;
        }
        unaff_x23 = FUN_03fd09cc();
        if (unaff_x23 == 0) goto LAB_052b4288;
        iVar1 = *(int *)(unaff_x23 + 0x1c);
        iVar8 = iVar1 + 1;
        *(int *)(unaff_x23 + 0x1c) = iVar8;
        if (iVar1 == 0) {
          if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_052b4288;
          param_1 = *(long *)(*(long *)(unaff_x23 + 0x10) + 0xa8);
          goto code_r0x052b407c;
        }
      } while (iVar8 < 3);
    } while( true );
  }
  goto LAB_052b4288;
  while( true ) {
    FUN_03fd09cc(lVar4,iVar8,*unaff_x25);
    FUN_03fd212c();
    lVar4 = *(long *)(unaff_x20 + 0x80);
    iVar8 = iVar8 + 1;
    if (lVar4 == 0) break;
LAB_052b41ac:
    if (*(int *)(lVar4 + 0x18) <= iVar8) {
      if ((0 < unaff_w24) && (*(int *)(unaff_x21 + 0x18) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar3 = FUN_066cd30c();
        if ((uVar3 & 1) != 0) {
          if (unaff_x19 == 0) break;
          *(undefined1 *)(unaff_x19 + 0x2f1) = 1;
        }
      }
      lVar4 = *(long *)(unaff_x20 + 0x80);
      if (lVar4 != 0) {
        iVar8 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (0 < iVar8) {
          FUN_05624da8(*(undefined8 *)(lVar4 + 0x10),0,iVar8,0);
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


