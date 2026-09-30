/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01eedb2c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01eedbac) */
/* WARNING: Removing unreachable block (ram,0x01eedc98) */

bool System_Array__InternalArray__ICollection_Contains<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  void *pvVar10;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  void *unaff_x24;
  long unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  
code_r0x01eedb2c:
  FUN_0347a75c(param_1,param_2);
LAB_01eed884:
  do {
    lVar5 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01eed8d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_01eed8d0:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_01eedba0;
      lVar5 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_01eedb78;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_01eedb60;
    }
    lVar5 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2508) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01eed934;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_01eed934:
    (*(code *)*puVar2)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x40);
    plVar9 = *(long **)(unaff_x22 + 0x38);
    pvVar10 = unaff_x26;
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      pvVar10 = unaff_x24;
    }
    memcpy(unaff_x28,pvVar10,unaff_x27);
    puVar2 = unaff_x28;
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x28;
    }
    puVar4 = (undefined8 *)plVar9[3];
    uVar3 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x60) = puVar2;
    *(long *)(unaff_x29 + -0x58) = unaff_x25;
    (*(code *)puVar4[2])(uVar3,puVar4,unaff_x19 + 0x150,unaff_x29 + -0x60,unaff_x19 + 0x30);
    memcpy((void *)(unaff_x19 + 0x100),(void *)(unaff_x19 + 0x30),0x50);
    uVar7 = FUN_0347a484(unaff_x19 + 0x100,0);
    if (((uVar7 & 1) == 0) &&
       ((*(float *)(unaff_x19 + 0x104) <= 0.0 || ((*(uint *)(unaff_x19 + 0x2c) & 1) == 0)))) {
      FUN_0347a75c(unaff_x19 + 0x100,0);
      goto LAB_01eed884;
    }
    if (unaff_x25 == 0) {
LAB_01eeda14:
      if (*(char *)(unaff_x29 + -0xf0) != '\0') {
        FUN_02d0d55c(unaff_x19 + 0x30,unaff_x29 + -0xf0,*(undefined8 *)StringLiteral_2514);
        memcpy((void *)(unaff_x19 + 0x90),(void *)(unaff_x19 + 0x30),0x50);
        if (*(float *)(unaff_x19 + 0x104) <= *(float *)(unaff_x19 + 0x94)) break;
        if (*(char *)(unaff_x29 + -0xf0) != '\0') {
          memcpy((void *)(unaff_x19 + 0x90),*(void **)(unaff_x19 + 0x20),0x50);
          FUN_0347a75c(unaff_x19 + 0x90,0);
        }
      }
      *(undefined8 *)(unaff_x19 + 0x80) = 0;
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      uVar3 = *(undefined8 *)StringLiteral_2512;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      *(undefined8 *)(unaff_x19 + 0x68) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      memcpy((void *)(unaff_x29 + -0x60),(void *)(unaff_x19 + 0x100),0x50);
      FUN_02d0d524(unaff_x19 + 0x30,unaff_x29 + -0x60,uVar3);
      memcpy((void *)(unaff_x29 + -0xf0),(void *)(unaff_x19 + 0x30),0x58);
      puVar1 = StringLiteral_2506;
      uVar12 = *(undefined8 *)(unaff_x19 + 0x158);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x150);
      *(undefined8 *)(unaff_x29 + -0x58) = 0;
      *(undefined8 *)(unaff_x29 + -0x60) = 0;
      *(undefined8 *)(unaff_x29 + -0x48) = 0;
      *(undefined8 *)(unaff_x29 + -0x50) = 0;
      uVar3 = *(undefined8 *)puVar1;
      uVar6 = *(undefined8 *)(unaff_x19 + 0x160);
      *(undefined8 *)(unaff_x29 + -0x78) = uVar12;
      *(undefined8 *)(unaff_x29 + -0x80) = uVar11;
      *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
      FUN_02d052f8(unaff_x29 + -0x60,unaff_x29 + -0x80,uVar3);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x60);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x48);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x50);
      *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x29 + -0x58);
      *(undefined8 *)(unaff_x19 + 0x170) = uVar3;
      *(undefined8 *)(unaff_x19 + 0x188) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x180) = uVar6;
      goto LAB_01eed884;
    }
    FUN_0347a4b4(unaff_x19 + 0x30,unaff_x19 + 0x100,0);
    *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x40);
    uVar7 = FUN_02994a58(unaff_x19 + 0xe0);
    if ((uVar7 & 1) != 0) goto LAB_01eeda14;
    FUN_0347a75c(unaff_x19 + 0x100,0);
  } while( true );
  param_1 = unaff_x19 + 0x100;
  param_2 = 0;
  goto code_r0x01eedb2c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_01eedb60:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_01eedb94;
    }
  }
LAB_01eedb78:
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_01eedb94:
  (*(code *)*puVar2)();
LAB_01eedba0:
  pvVar10 = *(void **)(unaff_x19 + 8);
  memcpy(pvVar10,(void *)(unaff_x29 - 0xf0U | 8),0x50);
  thunk_FUN_01b4f09c((long)pvVar10 + 0x48,0);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x178);
  puVar2 = *(undefined8 **)(unaff_x19 + 0x10);
  puVar2[2] = *(undefined8 *)(unaff_x19 + 0x188);
  puVar2[1] = uVar6;
  *puVar2 = uVar3;
  thunk_FUN_01b4f09c(puVar2,0);
  if (*(long *)(*(long *)(unaff_x19 + 0x18) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *(char *)(unaff_x29 + -0xf0) != '\0';
}


