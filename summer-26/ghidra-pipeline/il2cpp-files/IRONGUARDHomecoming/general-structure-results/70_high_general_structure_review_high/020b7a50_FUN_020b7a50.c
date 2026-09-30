/*
FUNCTION_NAME: FUN_020b7a50
ENTRY_POINT: 020b7a50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x020b7d78) */
/* WARNING: Removing unreachable block (ram,0x020b7cac) */

undefined8 FUN_020b7a50(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_0482f923 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<VisibleLight>_GetSubArray__);
    DAT_0482f923 = 1;
  }
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_GetPooled__
                              );
    FUN_0404b8fc(lVar4,0);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar4;
    thunk_FUN_01f51358(plVar7,lVar4);
    uVar8 = FUN_0406df58(0,0x3f800000,0);
    *(undefined4 *)(param_1 + 0x30) = uVar8;
    puVar2 = Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__;
    lVar6 = *plVar7;
    lVar4 = *(long *)Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar2;
    }
    if ((lVar5 != 0) && (lVar6 != 0)) {
      thunk_FUN_0404b1d4(*(undefined4 *)(lVar5 + 0x44),*(undefined4 *)(lVar5 + 0x48),
                         *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),lVar6,
                         **(undefined4 **)(lVar4 + 0xb8),0);
      if (*(long *)(lVar5 + 0x30) != 0) {
        FUN_0404c740(*(long *)(lVar5 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
        fVar9 = *(float *)(lVar5 + 0x3c);
        fVar12 = *(float *)(param_1 + 0x30);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<VisibleLight>_GetSubArray__
                                  );
        FUN_0407829c(fVar9 - fVar12,uVar3,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar3);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
    goto LAB_020b7e30;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x70) == 0)) goto LAB_020b7e30;
    FUN_04083c08(*(long *)(lVar5 + 0x70),0);
    fVar9 = *(float *)(lVar5 + 0x38);
    fVar12 = *(float *)(lVar5 + 0x3c);
    fVar13 = *(float *)(lVar5 + 0x40);
    *(undefined4 *)(param_1 + 0x38) = 0;
    fVar9 = (fVar9 - fVar12) + *(float *)(param_1 + 0x30) / fVar13;
    *(float *)(param_1 + 0x34) = fVar9;
    fVar12 = 0.0;
    break;
  case 2:
    fVar12 = *(float *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar9 = (float)FUN_0407a33c(0);
    if (lVar5 == 0) goto LAB_020b7e30;
    fVar12 = fVar12 + fVar9 / (*(float *)(lVar5 + 0x40) * 0.5);
    *(float *)(param_1 + 0x3c) = fVar12;
    if (1.0 <= fVar12) {
      *(float *)(param_1 + 0x3c) = 0.0;
      goto LAB_020b7c74;
    }
    goto LAB_020b7d3c;
  case 3:
    fVar12 = *(float *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar9 = (float)FUN_0407a33c(0);
    if (lVar5 == 0) goto LAB_020b7e30;
    fVar12 = fVar12 + fVar9 / (*(float *)(lVar5 + 0x40) * 0.5);
    *(float *)(param_1 + 0x3c) = fVar12;
    if (1.0 <= fVar12) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),0);
      uVar8 = 4;
      goto FUN_020b7e14;
    }
LAB_020b7c74:
    puVar2 = Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__;
    lVar6 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar2;
    }
    if (lVar6 != 0) {
      fVar11 = *(float *)(param_1 + 0x3c);
      fVar9 = (float)*(undefined8 *)(lVar5 + 0x54);
      fVar12 = (float)((ulong)*(undefined8 *)(lVar5 + 0x54) >> 0x20);
      fVar13 = (float)*(undefined8 *)(lVar5 + 0x5c);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar5 + 0x5c) >> 0x20);
      if (fVar11 < 0.0) {
        fVar11 = 0.0;
      }
      fVar12 = fVar12 + ((float)((ulong)*(undefined8 *)(lVar5 + 0x44) >> 0x20) - fVar12) * fVar11;
      thunk_FUN_0404b1d4(CONCAT44(fVar12,fVar9 + ((float)*(undefined8 *)(lVar5 + 0x44) - fVar9) *
                                                 fVar11),fVar12,
                         fVar13 + ((float)*(undefined8 *)(lVar5 + 0x4c) - fVar13) * fVar11,
                         fVar10 + ((float)((ulong)*(undefined8 *)(lVar5 + 0x4c) >> 0x20) - fVar10) *
                                  fVar11,lVar6,**(undefined4 **)(lVar4 + 0xb8),0);
      if (*(long *)(lVar5 + 0x30) == 0) goto LAB_020b7e30;
      FUN_0404c740(*(long *)(lVar5 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),0);
      uVar8 = 3;
      goto FUN_020b7e14;
    }
    goto LAB_020b7e30;
  case 4:
    fVar9 = *(float *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x38) + 1;
    fVar12 = (float)iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
  }
  if (fVar12 < fVar9) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
LAB_020b7d3c:
    puVar2 = Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__;
    lVar6 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar2;
    }
    if ((lVar5 != 0) && (lVar6 != 0)) {
      fVar9 = *(float *)(param_1 + 0x3c);
      fVar13 = (float)*(undefined8 *)(lVar5 + 0x44);
      fVar12 = (float)((ulong)*(undefined8 *)(lVar5 + 0x44) >> 0x20);
      fVar10 = (float)*(undefined8 *)(lVar5 + 0x4c);
      fVar11 = (float)((ulong)*(undefined8 *)(lVar5 + 0x4c) >> 0x20);
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      fVar12 = fVar12 + ((float)((ulong)*(undefined8 *)(lVar5 + 0x54) >> 0x20) - fVar12) * fVar9;
      thunk_FUN_0404b1d4(CONCAT44(fVar12,fVar13 + ((float)*(undefined8 *)(lVar5 + 0x54) - fVar13) *
                                                  fVar9),fVar12,
                         fVar10 + ((float)*(undefined8 *)(lVar5 + 0x5c) - fVar10) * fVar9,
                         fVar11 + ((float)((ulong)*(undefined8 *)(lVar5 + 0x5c) >> 0x20) - fVar11) *
                                  fVar9,lVar6,**(undefined4 **)(lVar4 + 0xb8),0);
      if (*(long *)(lVar5 + 0x30) != 0) {
        FUN_0404c740(*(long *)(lVar5 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),0);
        uVar8 = 2;
FUN_020b7e14:
        *(undefined4 *)(param_1 + 0x10) = uVar8;
        return 1;
      }
    }
  }
  else if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x78) != 0) {
      FUN_04083c08(*(long *)(lVar5 + 0x78),0);
    }
    FUN_020b7814(lVar5);
    return 0;
  }
LAB_020b7e30:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


