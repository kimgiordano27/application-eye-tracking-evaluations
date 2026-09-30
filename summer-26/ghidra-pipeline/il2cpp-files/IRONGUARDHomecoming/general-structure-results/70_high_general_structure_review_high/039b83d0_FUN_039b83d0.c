/*
FUNCTION_NAME: FUN_039b83d0
ENTRY_POINT: 039b83d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void FUN_039b83d0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  
  if ((DAT_04838824 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_5355);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(StringLiteral_4506);
    thunk_FUN_01efb3a4(StringLiteral_4474);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_DiscardAndDispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_04838824 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_039b8a00;
  if (*param_2 != *(long *)Method_Drawing_CommandBuilder_DiscardAndDispose__) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_2);
  }
  uVar5 = System_Console__SetOut(param_2[5],0,0);
  if ((uVar5 & 1) == 0) {
    uVar11 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    uVar13 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar13 = FUN_03579868(uVar13,0);
    uVar5 = FUN_03582560(uVar11,uVar13,0);
    if ((uVar5 & 1) != 0) {
      FUN_039b65ec(param_1);
      return;
    }
    FUN_039b554c(param_1,param_2[4]);
    plVar9 = (long *)param_2[4];
    if (plVar9 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      uVar13 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      iVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      uVar4 = System_Net_Sockets_NetworkStream__Flush(param_2,0);
      FUN_039b9378(param_1,uVar11,uVar13,iVar3 == 0xb,uVar4 & 1);
      return;
    }
    goto LAB_039b8a00;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_039b8a00;
  lVar6 = FUN_039af820();
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_039b8a00;
  lVar7 = FUN_039af820(*(long *)(param_1 + 0x10));
  lVar15 = param_2[5];
  if (*(int *)(*(long *)StringLiteral_4506 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)StringLiteral_4506);
  }
  lVar8 = FUN_039c454c(lVar15,0);
  if (lVar8 == 0) goto LAB_039b8a00;
  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_039b8a0c;
  plVar9 = (long *)param_2[4];
  if (plVar9 == (long *)0x0) goto LAB_039b8a00;
  plVar16 = *(long **)(lVar8 + 0x20);
  lVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
  lVar14 = *(long *)(param_1 + 0x18);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__);
  }
  uVar11 = FUN_03986848(lVar10,0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_039b8a00;
  uVar2 = System_ComponentModel_ArrayConverter___ctor(*(long *)(param_1 + 0x10));
  if ((lVar14 == 0) ||
     (auVar17 = FUN_039c8460(lVar14,uVar11,uVar2,0), uVar5 = auVar17._0_8_, plVar16 == (long *)0x0))
  goto LAB_039b8a00;
  plVar9 = (long *)(**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
  if (plVar9 == (long *)0x0) goto LAB_039b8a00;
  uVar12 = FUN_035841f4(plVar9,0);
  if ((uVar12 & 1) == 0) {
    lVar14 = param_2[4];
LAB_039b86f4:
    FUN_039b554c(param_1,lVar14);
    plVar16 = (long *)0x0;
  }
  else {
    uVar12 = FUN_03999064(param_2,0);
    lVar14 = param_2[4];
    if ((uVar12 & 1) != 0) goto LAB_039b86f4;
    plVar16 = (long *)FUN_039b8a1c(param_1,lVar14,0);
    plVar9 = (long *)(**(code **)(*plVar9 + 0x438))(plVar9,*(undefined8 *)(*plVar9 + 0x440));
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (FUN_039ac428(*(long *)(param_1 + 0x10),uVar5 & 0xffffffff), lVar10 == 0)) goto LAB_039b8a00;
  uVar12 = FUN_0358471c(lVar10,0);
  if ((uVar12 & 1) == 0) {
LAB_039b875c:
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_039b8a00;
    FUN_039aba6c(*(long *)(param_1 + 0x10),uVar5 & 0xffffffff);
    puVar1 = Method_System_Convert_ToUInt64__;
    lVar14 = *(long *)(param_1 + 0x10);
    uVar11 = *(undefined8 *)Method_System_Convert_ToUInt64__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03579868(uVar11,0);
    if (lVar14 == 0) goto LAB_039b8a00;
    FUN_039ab1c0(lVar14,0,uVar11);
    lVar14 = *(long *)(param_1 + 0x10);
    uVar11 = FUN_03579868(*(undefined8 *)puVar1,0);
    if (lVar14 == 0) goto LAB_039b8a00;
    uVar11 = FUN_039a3928(uVar11,0,0);
    FUN_039aab5c(lVar14,uVar11);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_039b8a00;
    FUN_039afd14(*(long *)(param_1 + 0x10),lVar7);
  }
  else {
    if (*(int *)(*(long *)StringLiteral_4474 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_039d6eac(lVar10,0);
    if (((uVar12 & 1) != 0) &&
       (uVar12 = System_Net_Sockets_NetworkStream__Flush(param_2,0), (uVar12 & 1) != 0))
    goto LAB_039b875c;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_039aba6c(*(long *)(param_1 + 0x10),uVar5 & 0xffffffff);
    puVar1 = StringLiteral_4474;
    if (*(int *)(*(long *)StringLiteral_4474 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_039d6eac(lVar10,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_039c8ee8(lVar10,0);
      if (plVar9 == (long *)0x0) goto LAB_039b8a00;
      uVar12 = (**(code **)(*plVar9 + 0x948))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x950));
      if ((uVar12 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x10);
        uVar11 = FUN_039d6344(0);
        if (lVar10 == 0) goto LAB_039b8a00;
        FUN_039aab5c(lVar10,uVar11);
      }
    }
    lVar10 = *(long *)(param_1 + 0x10);
    if (plVar16 == (long *)0x0) {
      if (lVar10 == 0) goto LAB_039b8a00;
      FUN_039af678(lVar10,lVar15);
    }
    else {
      plVar9 = (long *)FUN_01f08890(*(undefined8 *)StringLiteral_5355,1);
      if (plVar9 == (long *)0x0) goto LAB_039b8a00;
      lVar14 = thunk_FUN_01f116d0(plVar16,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar14 == 0) {
        uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar11,0);
      }
      if ((int)plVar9[3] == 0) {
LAB_039b8a0c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar9[4] = (long)plVar16;
      thunk_FUN_01f51358(plVar9 + 4,plVar16);
      if (lVar10 == 0) goto LAB_039b8a00;
      FUN_039af720(lVar10,lVar15,lVar8,plVar9);
      (**(code **)(*plVar16 + 0x188))
                (plVar16,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*plVar16 + 400));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_039afc24(*(long *)(param_1 + 0x10),lVar6,0,1);
      if ((*(long *)(param_1 + 0x10) != 0) && (lVar7 != 0)) {
        FUN_0399e034(lVar7,*(long *)(param_1 + 0x10),0);
        lVar7 = *(long *)(param_1 + 0x10);
        uVar11 = *(undefined8 *)Method_System_Convert_ToUInt64__;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        if (lVar7 != 0) {
          FUN_039ab1c0(lVar7,0,uVar11);
          if ((*(long *)(param_1 + 0x10) != 0) && (lVar6 != 0)) {
            FUN_0399e034(lVar6,*(long *)(param_1 + 0x10),0);
            if (*(long *)(param_1 + 0x10) != 0) {
              lVar6 = *(long *)(param_1 + 0x18);
              uVar2 = System_ComponentModel_ArrayConverter___ctor();
              if (lVar6 != 0) {
                FUN_039c2c88(lVar6,uVar5,auVar17._8_8_,uVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_039b8a00:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


