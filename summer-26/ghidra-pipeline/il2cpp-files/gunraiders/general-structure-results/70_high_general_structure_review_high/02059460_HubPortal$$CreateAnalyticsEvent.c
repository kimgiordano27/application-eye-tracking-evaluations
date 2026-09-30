/*
FUNCTION_NAME: HubPortal$$CreateAnalyticsEvent
ENTRY_POINT: 02059460
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void HubPortal__CreateAnalyticsEvent(long param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  int unaff_w19;
  long unaff_x20;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  do {
    FUN_020ad64c(param_1,param_2,param_3);
    iVar2 = *(int *)(unaff_x24 + 0x20);
    if (iVar2 == 0xf) {
      if (((*(long *)(unaff_x20 + 0x20) == 0) ||
          (lVar4 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),unaff_w22,*unaff_x28), lVar4 == 0)) ||
         (lVar4 = FUN_03d468ac(lVar4,0), lVar4 == 0)) goto LAB_02059580;
      fVar8 = (float)unaff_w22 * unaff_s8;
    }
    else {
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar4 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),unaff_w22,*unaff_x28), lVar4 == 0)) {
LAB_02059580:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar4 = FUN_03d468ac(lVar4,0);
      if (iVar2 == 0x1e) {
        if (lVar4 == 0) goto LAB_02059580;
        fVar8 = (float)unaff_w22 * unaff_s9;
      }
      else {
        if (lVar4 == 0) goto LAB_02059580;
        fVar8 = (float)unaff_w22 * unaff_s10;
      }
    }
    FUN_03d54784(fVar8,0,0,lVar4,0);
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar4 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),unaff_w22,*unaff_x28), lVar4 == 0))
    goto LAB_02059580;
    lVar4 = FUN_03d468ac(lVar4,0);
    if (*(char *)(unaff_x29 + 0x6ea) == '\0') {
      FUN_01c5d288();
      *(undefined1 *)(unaff_x29 + 0x6ea) = 1;
    }
    if (lVar4 == 0) goto LAB_02059580;
    puVar6 = *(undefined4 **)(*unaff_x23 + 0xb8);
    FUN_03d55a04(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar4,0);
    unaff_w22 = unaff_w22 + 1;
    *(long *)(unaff_x24 + 0x48) = unaff_x20;
    if (unaff_w19 == unaff_w22) {
      return;
    }
    FUN_03d468ac();
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x27);
    }
    param_1 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>();
    lVar4 = *unaff_x26;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar4);
      lVar4 = *unaff_x26;
    }
    if (((**(long **)(lVar4 + 0xb8) == 0) ||
        (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x1c0), lVar4 == 0)) || (param_1 == 0))
    goto LAB_02059580;
    uVar1 = *(undefined4 *)(lVar4 + 400);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if (lVar4 == 0) goto LAB_02059580;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)System_Action<Vector2[],_byte[],_int>_TypeInfo;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_02059580;
    uVar3 = *(uint *)(lVar4 + 0x18);
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar3 + 1;
      *(long *)(lVar5 + (long)(int)uVar3 * 8 + 0x20) = param_1;
    }
    else {
      FUN_02d5004c(lVar4,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    if (((**(long **)(*unaff_x26 + 0xb8) == 0) ||
        (lVar4 = *(long *)(**(long **)(*unaff_x26 + 0xb8) + 0x1c0), lVar4 == 0)) ||
       (lVar4 = *(long *)(lVar4 + 0x318), lVar4 == 0)) goto LAB_02059580;
    param_2 = (ulong)*(uint *)(lVar4 + 0xdc);
    param_3 = 0;
    unaff_x24 = param_1;
  } while( true );
}


