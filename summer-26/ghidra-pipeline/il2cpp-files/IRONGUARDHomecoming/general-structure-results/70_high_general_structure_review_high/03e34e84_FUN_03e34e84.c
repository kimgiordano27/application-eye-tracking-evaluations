/*
FUNCTION_NAME: FUN_03e34e84
ENTRY_POINT: 03e34e84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


ulong FUN_03e34e84(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  int local_44;
  int local_38;
  uint local_34;
  
  if ((DAT_0483a887 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_Invoke__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<DetachFromPanelEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04579d08);
    DAT_0483a887 = 1;
  }
  puVar1 = Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__;
  local_34 = 0;
  iVar6 = (int)param_2;
  if (iVar6 < 0) {
LAB_03e35268:
    local_38 = iVar6;
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar9 = thunk_FUN_01f113fc(uVar9,&local_38);
    uVar10 = thunk_FUN_01efb3a4(PTR_DAT_04579d28);
    uVar9 = FUN_03406290(uVar10,uVar9,0);
LAB_03e352f4:
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                      );
    uVar10 = thunk_FUN_01f117cc();
    FUN_03566764(uVar10,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(PTR_DAT_04579d78);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,uVar9);
  }
  if (param_1 == (long *)0x0) {
LAB_03e35264:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03e34f50;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(param_1,*(long *)
                                 Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                        ,0);
LAB_03e34f50:
  plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
  if (plVar8 == (long *)0x0) goto LAB_03e35264;
  lVar12 = *plVar8;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03e34fb8;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__,0)
  ;
LAB_03e34fb8:
  iVar3 = (*(code *)*puVar7)(plVar8,puVar7[1]);
  if (iVar3 < iVar6) goto LAB_03e35268;
  uVar14 = param_2 >> 0x20;
  iVar3 = (int)(param_2 >> 0x20);
  if ((long)param_2 < 0) {
LAB_03e352a0:
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_38 = iVar3;
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar9 = thunk_FUN_01f113fc(uVar9,&local_38);
    local_44 = iVar6;
    uVar10 = thunk_FUN_01efb3a4(puVar1);
    uVar10 = thunk_FUN_01f113fc(uVar10,&local_44);
    uVar11 = thunk_FUN_01efb3a4(PTR_DAT_04579d30);
    uVar9 = FUN_0340f2f0(uVar11,uVar9,uVar10,0);
    goto LAB_03e352f4;
  }
  lVar13 = *param_1;
  lVar12 = *(long *)puVar1;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar12) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03e35020;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_1,lVar12,0);
LAB_03e35020:
  plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
  puVar2 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
  if (plVar8 == (long *)0x0) goto LAB_03e35264;
  lVar12 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03e35088;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__
                        ,0);
LAB_03e35088:
  lVar12 = (*(code *)*puVar7)(plVar8,param_2 & 0xffffffff,puVar7[1]);
  if (lVar12 == 0) goto LAB_03e35264;
  iVar4 = FUN_03e1cbb8(lVar12,0);
  if (iVar4 < iVar3) goto LAB_03e352a0;
  lVar13 = *param_1;
  lVar12 = *(long *)puVar1;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar12) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03e350f8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_1,lVar12,0);
LAB_03e350f8:
  plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
  if (plVar8 == (long *)0x0) goto LAB_03e35264;
  lVar12 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03e35158;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03e35158:
  lVar12 = (*(code *)*puVar7)(plVar8,param_2 & 0xffffffff,puVar7[1]);
  puVar1 = 
  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<DetachFromPanelEvent>__;
  if (lVar12 == 0) goto LAB_03e35264;
  if (*(char *)(lVar12 + 0x30) == '\0') {
    if (iVar3 != 0) {
      iVar6 = FUN_03e1cbb8(lVar12,0);
      if (iVar6 + -1 == iVar3) goto LAB_03e35244;
      goto LAB_03e35204;
    }
  }
  else {
    FUN_03e1e54c(lVar12,0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03e1cbb8(lVar12,0);
    uVar9 = FUN_03e347e8(param_1,param_2 & 0xffffffff,uVar5);
    if (iVar3 != 0) {
      FUN_0240f0d0(param_1,param_2 & 0xffffffff,uVar9,*(undefined8 *)PTR_DAT_04579d08);
LAB_03e35204:
      iVar6 = FUN_03e1cbb8(lVar12,0);
      FUN_03e349a0(param_1,param_2,param_2 & 0xffffffff | (ulong)(iVar6 - 1) << 0x20,&local_34);
      FUN_03e210a4(lVar12,iVar3 + 1,0);
      param_2 = (ulong)local_34;
    }
  }
  uVar14 = 0;
LAB_03e35244:
  return param_2 & 0xffffffff | uVar14 << 0x20;
}


