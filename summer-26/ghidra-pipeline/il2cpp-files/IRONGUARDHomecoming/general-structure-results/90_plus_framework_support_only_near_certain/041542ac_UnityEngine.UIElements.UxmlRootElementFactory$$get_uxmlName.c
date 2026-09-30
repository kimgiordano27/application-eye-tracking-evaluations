/*
FUNCTION_NAME: UnityEngine.UIElements.UxmlRootElementFactory$$get_uxmlName
ENTRY_POINT: 041542ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041546a4) */
/* WARNING: Removing unreachable block (ram,0x0415475c) */

void UnityEngine_UIElements_UxmlRootElementFactory__get_uxmlName(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar10;
  ulong unaff_x25;
  int iVar11;
  long lVar12;
  long unaff_x28;
  undefined8 *puVar13;
  
  puVar13 = *(undefined8 **)(unaff_x28 + 0xc18);
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar2) {
      if (*(long *)(unaff_x19 + 0x38) == 0) break;
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      uVar6 = FUN_04219978();
      iVar2 = FUN_041fe738(uVar6,0);
      lVar4 = *(long *)(unaff_x19 + 0x38);
      if ((unaff_x25 & 1) == 0) {
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(unaff_x21 + 0x318);
          thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x18));
          goto LAB_041546a8;
        }
        break;
      }
      if (lVar4 == 0) break;
      *(long *)(lVar4 + 0x20) = unaff_x21;
      thunk_FUN_01f51358((long *)(lVar4 + 0x20));
      FUN_0418c318(*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x28),
                   unaff_w22 + -1,0);
      FUN_0415489c(&stack0x00000058);
      memcpy(&stack0x000000b0,&stack0x00000058,0x58);
      FUN_04202f80(&stack0x000000b0,0);
      uVar7 = FUN_04228284();
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x21 + 0x3b0) == 0) break;
        FUN_0421fe74(*(long *)(unaff_x21 + 0x3b0),&stack0x000000b0,0);
      }
      puVar1 = PTR_DAT_0458bb78;
      if (*(int *)(*(long *)PTR_DAT_0458bb78 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0421b6dc(&stack0x000000b0,0);
      uVar7 = FUN_042223a0();
      if ((uVar7 & 1) != 0) {
        uVar6 = FUN_04219978();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar7 = FUN_0421c2a0(uVar6,&stack0x000000b0,0);
        if ((uVar7 & 1) == 0) {
          FUN_04153598();
        }
      }
      uVar7 = FUN_041fe790(&stack0x000000b0,0);
      if (((uVar7 & 1) == 0) || (uVar7 = FUN_04221704(), (uVar7 & 1) == 0)) {
        FUN_0422ba70();
      }
      else {
        FUN_04219978();
        FUN_04155068();
        FUN_0422ba70();
        FUN_0415513c();
      }
      FUN_04203098(&stack0x000000b0,0);
      FUN_04228294();
      uVar6 = FUN_04219978();
      uVar3 = FUN_027648b0(uVar6,*(undefined8 *)PTR_DAT_0458bc38);
      *(undefined4 *)(unaff_x21 + 800) = uVar3;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        puVar13 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        *puVar13 = 0;
        thunk_FUN_01f51358(puVar13,0);
        lVar4 = *(long *)(unaff_x19 + 0x28);
        if (lVar4 != 0) {
          iVar11 = *(int *)(lVar4 + 0x18);
          *(undefined4 *)(lVar4 + 0x18) = 0;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (0 < iVar11) {
            FUN_0358d1e4(*(undefined8 *)(lVar4 + 0x10),0,iVar11,0);
          }
          if (iVar2 < 1) {
            uVar6 = FUN_04219978();
            iVar2 = FUN_041fe738(uVar6,0);
            if (iVar2 < 1) goto LAB_041546a8;
          }
          puVar1 = PTR_DAT_0458bc28;
          if (*(int *)(*(long *)PTR_DAT_0458bc28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_0422a494();
          if ((uVar7 & 1) == 0) goto LAB_041546a8;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar8 = (long *)FUN_02df8f6c(*(undefined8 *)PTR_DAT_0458bc20);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_041d4560(plVar8);
          FUN_041d97d0();
          lVar4 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 == 0) goto LAB_04154670;
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_04154658;
        }
      }
      break;
    }
    lVar4 = FUN_030f28e4(param_1,iVar2,*puVar13);
    if (lVar4 == 0) break;
    lVar5 = FUN_042404bc(lVar4,0);
    if (lVar5 != 0) {
      lVar5 = FUN_042404bc(lVar4,0);
      if (lVar5 == 0) break;
      iVar11 = 0;
      while (iVar11 < *(int *)(lVar5 + 0x18)) {
        lVar12 = *(long *)(unaff_x19 + 0x38);
        lVar5 = FUN_042404bc(lVar4,0);
        if ((lVar5 == 0) || (uVar6 = FUN_030f28e4(lVar5,iVar11,*puVar13), lVar12 == 0))
        goto LAB_04154364;
        FUN_04153e18(lVar12,uVar6);
        iVar11 = iVar11 + 1;
        lVar5 = FUN_042404bc(lVar4,0);
        if (lVar5 == 0) goto LAB_04154364;
      }
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) break;
    FUN_04153e18(*(long *)(unaff_x19 + 0x38),lVar4);
    param_1 = *(long *)(unaff_x21 + 0x3b8);
    iVar2 = iVar2 + 1;
  } while (param_1 != 0);
  goto LAB_04154364;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_04154658:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0415468c;
    }
  }
LAB_04154670:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar8,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0415468c:
  (*(code *)*puVar13)(plVar8,puVar13[1]);
LAB_041546a8:
  if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) != 0)) {
    FUN_041c4888();
    FUN_0417ce9c();
    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30), lVar4 != 0)) {
      FUN_041c4ab8(lVar4,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        puVar13 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        *puVar13 = uVar10;
        thunk_FUN_01f51358(puVar13,uVar10);
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          iVar2 = FUN_04153ca8();
          if (unaff_w22 < iVar2) {
            lVar4 = *(long *)(unaff_x19 + 0x38);
            if (lVar4 == 0) goto LAB_04154364;
            iVar2 = FUN_04153ca8(lVar4);
            FUN_04153f18(lVar4,unaff_w22,iVar2 - unaff_w22);
          }
          return;
        }
      }
    }
  }
LAB_04154364:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


