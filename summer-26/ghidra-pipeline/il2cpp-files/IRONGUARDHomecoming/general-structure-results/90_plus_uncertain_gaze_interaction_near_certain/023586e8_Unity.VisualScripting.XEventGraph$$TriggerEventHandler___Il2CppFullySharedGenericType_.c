/*
FUNCTION_NAME: Unity.VisualScripting.XEventGraph$$TriggerEventHandler<__Il2CppFullySharedGenericType>
ENTRY_POINT: 023586e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02358a6c) */
/* WARNING: Removing unreachable block (ram,0x02358b58) */

bool Unity_VisualScripting_XEventGraph__TriggerEventHandler<__Il2CppFullySharedGenericType>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  void *pvVar11;
  long unaff_x22;
  long *plVar12;
  long unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar3 = FUN_01ecaf44();
  FUN_01f09244(uVar3,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x10));
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar12 = *(long **)(unaff_x19 + 0x30);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(ulong *)(unaff_x19 + 0x20) = unaff_x29 - 0xf0U | 8;
LAB_02358744:
  do {
    lVar6 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02358790;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,0);
LAB_02358790:
    uVar8 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if ((uVar8 & 1) == 0) break;
    lVar6 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Method_UnityEngine_Component_GetComponent<Animator>__
           ) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_023587f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar12,*(long *)Method_UnityEngine_Component_GetComponent<Animator>__,0);
LAB_023587f4:
    (*(code *)*puVar4)(unaff_x19 + 0x30,plVar12,puVar4[1]);
    *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x40);
    plVar10 = *(long **)(unaff_x22 + 0x38);
    pvVar11 = unaff_x26;
    if (-1 < *(int *)(*plVar10 + 0x28)) {
      pvVar11 = (void *)(unaff_x29 + -0x88);
    }
    memcpy(unaff_x28,pvVar11,unaff_x27);
    puVar4 = unaff_x28;
    if (-1 < *(int *)(*plVar10 + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x28;
    }
    puVar5 = (undefined8 *)plVar10[3];
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x60) = puVar4;
    *(long *)(unaff_x29 + -0x58) = unaff_x25;
    (*(code *)puVar5[2])(uVar3,puVar5,unaff_x19 + 0x150,unaff_x29 + -0x60,unaff_x19 + 0x30);
    memcpy((void *)(unaff_x19 + 0x100),(void *)(unaff_x19 + 0x30),0x50);
    uVar8 = FUN_03b56294(unaff_x19 + 0x100,0);
    if (((uVar8 & 1) == 0) &&
       ((*(float *)(unaff_x19 + 0x104) <= 0.0 || ((*(uint *)(unaff_x19 + 0x2c) & 1) == 0)))) {
      FUN_03b5656c(unaff_x19 + 0x100,0);
      goto LAB_02358744;
    }
    if (unaff_x25 == 0) {
LAB_023588d4:
      if (*(char *)(unaff_x29 + -0xf0) != '\0') {
        FUN_03337264(unaff_x19 + 0x30,unaff_x29 + -0xf0,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<Button>__);
        memcpy((void *)(unaff_x19 + 0x90),(void *)(unaff_x19 + 0x30),0x50);
        if (*(float *)(unaff_x19 + 0x104) <= *(float *)(unaff_x19 + 0x94)) {
          FUN_03b5656c(unaff_x19 + 0x100,0);
          goto LAB_02358744;
        }
        if (*(char *)(unaff_x29 + -0xf0) != '\0') {
          memcpy((void *)(unaff_x19 + 0x90),*(void **)(unaff_x19 + 0x20),0x50);
          FUN_03b5656c(unaff_x19 + 0x90,0);
        }
      }
      *(undefined8 *)(unaff_x19 + 0x80) = 0;
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      uVar3 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<BaseUIEffect>__;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      *(undefined8 *)(unaff_x19 + 0x68) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      memcpy((void *)(unaff_x29 + -0x60),(void *)(unaff_x19 + 0x100),0x50);
      FUN_0333722c(unaff_x19 + 0x30,unaff_x29 + -0x60,uVar3);
      memcpy((void *)(unaff_x29 + -0xf0),(void *)(unaff_x19 + 0x30),0x58);
      puVar2 = Method_UnityEngine_Component_GetComponent<Anchor>__;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x158);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x150);
      *(undefined8 *)(unaff_x29 + -0x58) = 0;
      *(undefined8 *)(unaff_x29 + -0x60) = 0;
      *(undefined8 *)(unaff_x29 + -0x48) = 0;
      *(undefined8 *)(unaff_x29 + -0x50) = 0;
      uVar3 = *(undefined8 *)puVar2;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x160);
      *(undefined8 *)(unaff_x29 + -0x78) = uVar14;
      *(undefined8 *)(unaff_x29 + -0x80) = uVar13;
      *(undefined8 *)(unaff_x29 + -0x70) = uVar7;
      FUN_0332df1c(unaff_x29 + -0x60,unaff_x29 + -0x80,uVar3);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x60);
      uVar13 = *(undefined8 *)(unaff_x29 + -0x48);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x50);
      *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x29 + -0x58);
      *(undefined8 *)(unaff_x19 + 0x170) = uVar3;
      *(undefined8 *)(unaff_x19 + 0x188) = uVar13;
      *(undefined8 *)(unaff_x19 + 0x180) = uVar7;
      goto LAB_02358744;
    }
    FUN_03b562c4(unaff_x19 + 0x30,unaff_x19 + 0x100,0);
    *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x40);
    uVar8 = FUN_02f1f898(unaff_x19 + 0xe0);
    if ((uVar8 & 1) != 0) goto LAB_023588d4;
    FUN_03b5656c(unaff_x19 + 0x100,0);
  } while( true );
  if (plVar12 != (long *)0x0) {
    lVar6 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02358a54;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar12,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02358a54:
    (*(code *)*puVar4)(plVar12,puVar4[1]);
  }
  pvVar11 = *(void **)(unaff_x19 + 8);
  memcpy(pvVar11,(void *)(unaff_x29 - 0xf0U | 8),0x50);
  thunk_FUN_01f51358((long)pvVar11 + 0x48,0);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x178);
  puVar4 = *(undefined8 **)(unaff_x19 + 0x10);
  puVar4[2] = *(undefined8 *)(unaff_x19 + 0x188);
  puVar4[1] = uVar7;
  *puVar4 = uVar3;
  thunk_FUN_01f51358(puVar4,0);
  if (*(long *)(*(long *)(unaff_x19 + 0x18) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *(char *)(unaff_x29 + -0xf0) != '\0';
}


