/*
FUNCTION_NAME: TMPro.TextMeshPro$$SetFaceColor
ENTRY_POINT: 03d49ed4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03d4a270) */
/* WARNING: Removing unreachable block (ram,0x03d4a15c) */
/* WARNING: Removing unreachable block (ram,0x03d4a27c) */
/* WARNING: Removing unreachable block (ram,0x03d4a164) */
/* WARNING: Removing unreachable block (ram,0x03d4a278) */
/* WARNING: Removing unreachable block (ram,0x03d4a17c) */
/* WARNING: Removing unreachable block (ram,0x03d4a190) */

void TMPro_TextMeshPro__SetFaceColor(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  long lVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x25;
  undefined8 uVar13;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x03d49ed4:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_03d49ec8;
LAB_03d49ee0:
  puVar3 = (undefined8 *)FUN_01ecb238();
  do {
    lVar4 = (*(code *)*puVar3)();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = FUN_03d000b0(lVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar7 = *unaff_x26;
      uVar11 = *(undefined8 *)(lVar4 + 0x28);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar7);
        lVar7 = *unaff_x26;
      }
      lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar7);
          lVar7 = *unaff_x26;
        }
        uVar13 = **(undefined8 **)(lVar7 + 0xb8);
        lVar12 = thunk_FUN_01f117cc(*unaff_x27);
        FUN_02e6c0a0(lVar12,uVar13,*(undefined8 *)PTR_DAT_04574d00,0);
        plVar6 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
        *plVar6 = lVar12;
        thunk_FUN_01f51358(plVar6,lVar12);
        unaff_x25 = (undefined8 *)PTR_DAT_04574c98;
      }
      iVar2 = FUN_022f3de4(uVar11,lVar12,*unaff_x25);
      if (iVar2 != 0) {
        uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
        uVar11 = FUN_04070398();
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar7 = FUN_023aa97c(uVar13,uVar11,0,*(undefined8 *)PTR_DAT_04574cf0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = FUN_040703d4(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_040767ac(lVar7,*(undefined8 *)(lVar4 + 0x18),0);
        lVar12 = FUN_023361c8(lVar7,*(undefined8 *)StringLiteral_1244);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407c5d4(lVar12,0);
        FUN_0407d05c(lVar12,1,0);
        lVar12 = FUN_023361c8(lVar7,*(undefined8 *)PTR_DAT_04574cc8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03d4a450(lVar12,lVar4);
        *(long *)(lVar12 + 0x38) = unaff_x19;
        thunk_FUN_01f51358();
        lVar4 = *(long *)(unaff_x19 + 0x40);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *(long *)(lVar4 + 0x10);
        lVar9 = *(long *)PTR_DAT_04574cd8;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar12;
          thunk_FUN_01f51358(plVar6,lVar12);
        }
        else {
          FUN_030f2bb4(lVar4,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        lVar4 = FUN_023361c8(lVar7,*(undefined8 *)PTR_DAT_04574cc0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03d4a498();
        uVar5 = FUN_04073094(0,0,0);
        if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03d49ea0;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03d49ea0:
    uVar5 = (*(code *)*puVar3)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_03d4a200;
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_03d4a1d8;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x29;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_03d49ee0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03d49ec8:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x03d49ed4;
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
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


