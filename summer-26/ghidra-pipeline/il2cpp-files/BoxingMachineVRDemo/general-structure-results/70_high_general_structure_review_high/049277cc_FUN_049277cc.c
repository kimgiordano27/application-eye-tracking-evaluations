/*
FUNCTION_NAME: FUN_049277cc
ENTRY_POINT: 049277cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04927c3c) */

void FUN_049277cc(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  
                    /* try { // try from 049277cc to 04a277cf has its CatchHandler @ 0492783c */
                    /* try { // try from 049277f0 to 04a277f3 has its CatchHandler @ 04927838 */
                    /* try { // try from 049277f4 to 04a2780f has its CatchHandler @ 04927840 */
  if ((DAT_06b7773c & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    DAT_06b7773c = 1;
  }
  uVar5 = 0;
  if (param_2 != (long *)0x0) {
    uVar5 = param_1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0(lVar7);
    }
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_049278a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(param_2,lVar7,0);
LAB_049278a4:
    uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  FUN_04927720(uVar5,uVar3,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(1,0);
  }
  uVar5 = thunk_FUN_02d709fc(param_2,0);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
  }
  uVar12 = FUN_05015c2c(uVar12,0);
  uVar9 = FUN_0501ed54(uVar5,uVar12,0);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0(lVar7);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = param_2[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      puVar11 = (ulong *)(lVar7 + 0x2c);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        if (-1 < *(int *)((long)puVar11 + -0xc)) {
          local_90 = puVar11[2];
          uStack_98 = puVar11[1];
          local_a0 = *puVar11;
          local_80 = local_a0;
          uStack_78 = uStack_98;
          local_70 = local_90;
          FUN_04928ce0(param_1,*(undefined4 *)((long)puVar11 + -4),&local_a0,2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                      0x80) + 0x20) + 0xc0) + 0x110));
        }
        uVar9 = uVar9 + 1;
        puVar11 = (ulong *)((long)puVar11 + 0x24);
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto System_Array_EmptyInternalEnumerator<InstanceOcclusionEventDebugArray_Request>__Dispose
        ;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(param_2,lVar7,0);
System_Array_EmptyInternalEnumerator<InstanceOcclusionEventDebugArray_Request>__Dispose:
  plVar6 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = PTR_DAT_0675f3d8;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  puVar11 = (ulong *)((ulong)&local_a0 | 4);
  do {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04927ac8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,0);
LAB_04927ac8:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04927b40;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar7,0);
LAB_04927b40:
    (*(code *)*puVar4)(&local_a0,plVar6,puVar4[1]);
    uStack_98 = puVar11[1];
    local_60 = *puVar11;
    local_90 = puVar11[2];
    uVar9 = local_a0 & 0xffffffff;
    local_a0 = local_60;
    uStack_58 = uStack_98;
    local_50 = local_90;
    FUN_04928ce0(param_1,uVar9,&local_a0,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80)
                                      + 0x20) + 0xc0) + 0x110));
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto System_Array_EmptyInternalEnumerator<JsonParser_JsonValue>___ctor;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0675f3d0,0);
System_Array_EmptyInternalEnumerator<JsonParser_JsonValue>___ctor:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


