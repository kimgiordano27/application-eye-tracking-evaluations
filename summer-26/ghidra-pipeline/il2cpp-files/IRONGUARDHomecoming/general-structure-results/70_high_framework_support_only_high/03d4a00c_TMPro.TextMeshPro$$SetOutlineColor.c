/*
FUNCTION_NAME: TMPro.TextMeshPro$$SetOutlineColor
ENTRY_POINT: 03d4a00c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03d4a270) */
/* WARNING: Removing unreachable block (ram,0x03d4a15c) */
/* WARNING: Removing unreachable block (ram,0x03d4a27c) */
/* WARNING: Removing unreachable block (ram,0x03d4a164) */
/* WARNING: Removing unreachable block (ram,0x03d4a278) */
/* WARNING: Removing unreachable block (ram,0x03d4a17c) */
/* WARNING: Removing unreachable block (ram,0x03d4a190) */

void TMPro_TextMeshPro__SetOutlineColor(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_040767ac(param_1,*(undefined8 *)(unaff_x22 + 0x18),0);
    lVar4 = FUN_023361c8(param_1,*(undefined8 *)StringLiteral_1244);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0407c5d4(lVar4,0);
    FUN_0407d05c(lVar4,1,0);
    lVar4 = FUN_023361c8(param_1,*(undefined8 *)PTR_DAT_04574cc8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03d4a450(lVar4,unaff_x22);
    *(long *)(lVar4 + 0x38) = unaff_x19;
    thunk_FUN_01f51358();
    lVar5 = *(long *)(unaff_x19 + 0x40);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_04574cd8;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = lVar4;
      thunk_FUN_01f51358(plVar8,lVar4);
    }
    else {
      FUN_030f2bb4(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar4 = FUN_023361c8(param_1,*(undefined8 *)PTR_DAT_04574cc0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03d4a498();
    uVar6 = FUN_04073094(0,0,0);
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      do {
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x28) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03d49ea0;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03d49ea0:
        uVar6 = (*(code *)*puVar3)();
        if ((uVar6 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) goto LAB_03d4a200;
          lVar4 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto LAB_03d4a1d8;
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_03d4a1c0;
        }
        lVar4 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03d49efc;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03d49efc:
        unaff_x22 = (*(code *)*puVar3)();
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_03d000b0(unaff_x22,0);
      } while ((uVar6 & 1) != 0);
      lVar4 = *unaff_x26;
      uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar4);
        lVar4 = *unaff_x26;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar5 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar4);
          lVar4 = *unaff_x26;
        }
        uVar12 = **(undefined8 **)(lVar4 + 0xb8);
        lVar5 = thunk_FUN_01f117cc(*unaff_x27);
        FUN_02e6c0a0(lVar5,uVar12,*(undefined8 *)PTR_DAT_04574d00,0);
        plVar8 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
        *plVar8 = lVar5;
        thunk_FUN_01f51358(plVar8,lVar5);
        unaff_x25 = (undefined8 *)PTR_DAT_04574c98;
      }
      iVar2 = FUN_022f3de4(uVar11,lVar5,*unaff_x25);
    } while (iVar2 == 0);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar11 = FUN_04070398();
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = FUN_023aa97c(uVar12,uVar11,0,*(undefined8 *)PTR_DAT_04574cf0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = FUN_040703d4(lVar4,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar10 = piVar10 + 4;
    if (uVar6 == 0) break;
LAB_03d4a1c0:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03d4a1f4;
    }
  }
LAB_03d4a1d8:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03d4a1f4:
  (*(code *)*puVar3)();
LAB_03d4a200:
  FUN_03d4a950();
  return;
}


