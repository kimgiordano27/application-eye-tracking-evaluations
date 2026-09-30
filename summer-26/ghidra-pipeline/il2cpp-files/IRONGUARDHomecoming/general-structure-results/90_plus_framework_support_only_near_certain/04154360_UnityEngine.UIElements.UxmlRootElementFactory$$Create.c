/*
FUNCTION_NAME: UnityEngine.UIElements.UxmlRootElementFactory$$Create
ENTRY_POINT: 04154360
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

void UnityEngine_UIElements_UxmlRootElementFactory__Create(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  undefined8 uVar12;
  ulong unaff_x25;
  long lVar13;
  undefined8 *unaff_x28;
  
  while (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) <= unaff_w23) {
      if (*(long *)(unaff_x19 + 0x38) == 0) break;
      uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      uVar7 = FUN_04219978();
      iVar3 = FUN_041fe738(uVar7,0);
      lVar5 = *(long *)(unaff_x19 + 0x38);
      if ((unaff_x25 & 1) == 0) {
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(unaff_x21 + 0x318);
          thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x18));
          goto LAB_041546a8;
        }
        break;
      }
      if (lVar5 == 0) break;
      *(long *)(lVar5 + 0x20) = unaff_x21;
      thunk_FUN_01f51358((long *)(lVar5 + 0x20));
      FUN_0418c318(*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x28),
                   unaff_w22 + -1,0);
      FUN_0415489c(&stack0x00000058);
      memcpy(&stack0x000000b0,&stack0x00000058,0x58);
      FUN_04202f80(&stack0x000000b0,0);
      uVar8 = FUN_04228284();
      if ((uVar8 & 1) != 0) {
        if (*(long *)(unaff_x21 + 0x3b0) == 0) break;
        FUN_0421fe74(*(long *)(unaff_x21 + 0x3b0),&stack0x000000b0,0);
      }
      puVar2 = PTR_DAT_0458bb78;
      if (*(int *)(*(long *)PTR_DAT_0458bb78 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0421b6dc(&stack0x000000b0,0);
      uVar8 = FUN_042223a0();
      if ((uVar8 & 1) != 0) {
        uVar7 = FUN_04219978();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar8 = FUN_0421c2a0(uVar7,&stack0x000000b0,0);
        if ((uVar8 & 1) == 0) {
          FUN_04153598();
        }
      }
      uVar8 = FUN_041fe790(&stack0x000000b0,0);
      if (((uVar8 & 1) == 0) || (uVar8 = FUN_04221704(), (uVar8 & 1) == 0)) {
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
      uVar7 = FUN_04219978();
      uVar4 = FUN_027648b0(uVar7,*(undefined8 *)PTR_DAT_0458bc38);
      *(undefined4 *)(unaff_x21 + 800) = uVar4;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        *puVar9 = 0;
        thunk_FUN_01f51358(puVar9,0);
        lVar5 = *(long *)(unaff_x19 + 0x28);
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0x18);
          *(undefined4 *)(lVar5 + 0x18) = 0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0358d1e4(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
          }
          if (iVar3 < 1) {
            uVar7 = FUN_04219978();
            iVar3 = FUN_041fe738(uVar7,0);
            if (iVar3 < 1) goto LAB_041546a8;
          }
          puVar2 = PTR_DAT_0458bc28;
          if (*(int *)(*(long *)PTR_DAT_0458bc28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_0422a494();
          if ((uVar8 & 1) == 0) goto LAB_041546a8;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar10 = (long *)FUN_02df8f6c(*(undefined8 *)PTR_DAT_0458bc20);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_041d4560(plVar10);
          FUN_041d97d0();
          lVar5 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 == 0) goto LAB_04154670;
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_04154658;
        }
      }
      break;
    }
    lVar5 = FUN_030f28e4(param_1,unaff_w23,*unaff_x28);
    if (lVar5 == 0) break;
    lVar6 = FUN_042404bc(lVar5,0);
    if (lVar6 != 0) {
      lVar6 = FUN_042404bc(lVar5,0);
      if (lVar6 == 0) break;
      iVar3 = 0;
      while (iVar3 < *(int *)(lVar6 + 0x18)) {
        lVar13 = *(long *)(unaff_x19 + 0x38);
        lVar6 = FUN_042404bc(lVar5,0);
        if ((lVar6 == 0) || (uVar7 = FUN_030f28e4(lVar6,iVar3,*unaff_x28), lVar13 == 0))
        goto LAB_04154364;
        FUN_04153e18(lVar13,uVar7);
        iVar3 = iVar3 + 1;
        lVar6 = FUN_042404bc(lVar5,0);
        if (lVar6 == 0) goto LAB_04154364;
      }
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) break;
    FUN_04153e18(*(long *)(unaff_x19 + 0x38),lVar5);
    unaff_w23 = unaff_w23 + 1;
    param_1 = *(long *)(unaff_x21 + 0x3b8);
  }
  goto LAB_04154364;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_04154658:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0415468c;
    }
  }
LAB_04154670:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0415468c:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_041546a8:
  if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) != 0)) {
    FUN_041c4888();
    FUN_0417ce9c();
    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30), lVar5 != 0)) {
      FUN_041c4ab8(lVar5,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        *puVar9 = uVar12;
        thunk_FUN_01f51358(puVar9,uVar12);
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          iVar3 = FUN_04153ca8();
          if (unaff_w22 < iVar3) {
            lVar5 = *(long *)(unaff_x19 + 0x38);
            if (lVar5 == 0) goto LAB_04154364;
            iVar3 = FUN_04153ca8(lVar5);
            FUN_04153f18(lVar5,unaff_w22,iVar3 - unaff_w22);
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


