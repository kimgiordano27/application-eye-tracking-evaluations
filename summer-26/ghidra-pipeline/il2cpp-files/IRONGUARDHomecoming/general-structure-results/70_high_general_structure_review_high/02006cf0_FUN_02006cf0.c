/*
FUNCTION_NAME: FUN_02006cf0
ENTRY_POINT: 02006cf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_02006cf0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_0482ef8e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__
                      );
    DAT_0482ef8e = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__;
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
  if (*(char *)(param_4 + 0xdc) == '\0') {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__,0);
    return;
  }
  lVar5 = *(long *)(param_4 + 0x68);
  if (lVar5 == 0) {
LAB_02006f30:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = 0;
  do {
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar8) {
      return;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_02006fa4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_02006f30;
    lVar5 = FUN_022c59ec(lVar5,*(undefined8 *)puVar2);
    lVar6 = *(long *)(param_4 + 0xa0);
    if (lVar6 == 0) goto LAB_02006f30;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_02006fa4;
    lVar6 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_02006f30;
    iVar1 = *(int *)(lVar6 + 0x18);
    fVar10 = *(float *)(param_4 + 0x8c);
    if (iVar1 < 1) {
      fVar12 = *(float *)(param_4 + 0x90);
      fVar10 = (fVar10 - *(float *)(param_4 + 0x88)) + fVar10;
    }
    else {
      iVar7 = 0;
      do {
        lVar4 = FUN_030f28e4(lVar6,iVar7,*(undefined8 *)puVar3);
        if (lVar4 == 0) goto LAB_02006f30;
        FUN_0407c270(lVar4,0);
        iVar7 = iVar7 + 1;
        fVar10 = fVar10 + param_3 + *(float *)(param_4 + 0x88);
      } while (iVar1 != iVar7);
      fVar12 = *(float *)(param_4 + 0x90);
      fVar10 = (fVar10 - *(float *)(param_4 + 0x88)) + *(float *)(param_4 + 0x8c);
      if (0 < iVar1) {
        iVar7 = 0;
        fVar11 = fVar10 * -0.5;
        do {
          lVar4 = FUN_030f28e4(lVar6,iVar7,*(undefined8 *)puVar3);
          if (iVar7 == 0) {
            fVar11 = fVar11 + *(float *)(param_4 + 0x8c);
          }
          if (lVar4 == 0) goto LAB_02006f30;
          FUN_0407c270(lVar4,0);
          fVar11 = fVar11 + param_3 * 0.5;
          FUN_0407c5d4(fVar11,-fVar12,lVar4,0);
          FUN_0407c270(lVar4,0);
          fVar11 = fVar11 + *(float *)(param_4 + 0x88) + param_3 * 0.5;
          FUN_0407c270(lVar4,0);
          iVar7 = iVar7 + 1;
          fVar9 = param_3 + *(float *)(param_4 + 0x8c) + *(float *)(param_4 + 0x8c);
          if (fVar9 <= fVar10) {
            fVar9 = fVar10;
          }
          fVar10 = fVar9;
        } while (iVar1 != iVar7);
      }
    }
    if (lVar5 == 0) goto LAB_02006f30;
    FUN_0407d05c(fVar10,lVar5,0,0);
    FUN_0407d05c(fVar12 + *(float *)(param_4 + 0x90),lVar5,1,0);
    lVar5 = *(long *)(param_4 + 0x68);
    uVar8 = uVar8 + 1;
    if (lVar5 == 0) goto LAB_02006f30;
  } while( true );
}


