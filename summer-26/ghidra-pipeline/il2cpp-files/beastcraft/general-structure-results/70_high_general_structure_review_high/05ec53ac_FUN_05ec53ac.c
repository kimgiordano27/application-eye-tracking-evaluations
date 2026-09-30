/*
FUNCTION_NAME: FUN_05ec53ac
ENTRY_POINT: 05ec53ac
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ec5790) */

void FUN_05ec53ac(long param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lStack_40;
  long *plStack_38;
  
  puVar1 = UnityEngine_AndroidJavaRunnable_var;
  if ((bRam0000000006e94276 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_BeforeRenderOrderAttribute_var);
    FUN_02e3ca1c(PTR_DAT_06ab5e90);
    FUN_02e3ca1c(PTR_DAT_06ab07f8);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(System_Numerics_BigInteger_var);
    FUN_02e3ca1c(UnityEngine_AndroidJavaRunnable_var);
    FUN_02e3ca1c(System_IO_BinaryWriter_var);
    FUN_02e3ca1c(UnityEngine_UIElements_BindingActivationContext_var);
    FUN_02e3ca1c(Unity_Services_CloudSave_Internal_Models_BasicErrorResponse_var);
    FUN_02e3ca1c(Unity_Services_Economy_Internal_Models_BasicErrorResponse_var);
    bRam0000000006e94276 = 1;
  }
  lVar3 = *(long *)puVar1;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
  if ((lVar3 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  plStack_38 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>
                                 (param_2,*(undefined8 *)(lVar3 + 0x20),&lStack_40,lVar3,
                                  *(undefined8 *)
                                   Unity_Services_Economy_Internal_Models_BasicErrorResponse_var,
                                  0x3a6,*(undefined8 *)System_IO_BinaryWriter_var);
  if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  *(long *)(lStack_40 + 0x10) = param_1;
  thunk_FUN_02ee2be8((long *)(lStack_40 + 0x10),param_1);
  lVar3 = lStack_40;
  if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar4 = FUN_05eaedc0(*(long *)(param_1 + 0x138),*(undefined8 *)PTR_DAT_06ab5e90);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  puVar8 = (undefined8 *)(lVar3 + 0x18);
  *puVar8 = uVar4;
  thunk_FUN_02ee2be8(puVar8);
  plVar2 = plStack_38;
  if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (*(long *)(lStack_40 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar4 = *(undefined8 *)(*(long *)(lStack_40 + 0x18) + 0xf8);
  *(byte *)(lStack_40 + 0x20) = param_3 & 1;
  *(undefined8 *)(lStack_40 + 0x24) = uVar4;
  puVar1 = PTR_DAT_06ab07f8;
  if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar3 = *plStack_38;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06ab07f8) {
        puVar8 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto Unity_Services_CloudSave_Internal_Files_FilesApiBaseRequest___ctor;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_02e759c0(plStack_38,*(long *)PTR_DAT_06ab07f8,0xb);
Unity_Services_CloudSave_Internal_Files_FilesApiBaseRequest___ctor:
  (*(code *)*puVar8)(plVar2,0,puVar8[1]);
  plVar2 = plStack_38;
  if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar3 = *plStack_38;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_05ec55ec;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_02e759c0(plStack_38,*(long *)puVar1,0xc);
LAB_05ec55ec:
  (*(code *)*puVar8)(plVar2,1,puVar8[1]);
  plVar2 = plStack_38;
  puVar1 = Unity_Services_CloudSave_Internal_Models_BasicErrorResponse_var;
  lVar3 = *(long *)Unity_Services_CloudSave_Internal_Models_BasicErrorResponse_var;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar3 = *(long *)puVar1;
  }
  puVar8 = *(undefined8 **)(lVar3 + 0xb8);
  lVar9 = puVar8[3];
  if (lVar9 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar8 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar4 = *puVar8;
    lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_BeforeRenderOrderAttribute_var);
    FUN_04b2178c(lVar9,uVar4,*(undefined8 *)UnityEngine_UIElements_BindingActivationContext_var,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar5 = lVar9;
    thunk_FUN_02ee2be8(plVar5,lVar9);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar3 = *plVar2;
  lVar10 = *(long *)System_Numerics_BigInteger_var;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_05ec56e0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar3 = FUN_02e759c0(plVar2);
LAB_05ec56e0:
  lVar3 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar3 + 8),lVar10);
  (**(code **)(lVar3 + 8))(plVar2,lVar9,lVar3);
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    lVar3 = *plStack_38;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a2ef10) {
          puVar8 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05ec5764;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_02e759c0(plStack_38,*(long *)PTR_DAT_06a2ef10,0);
LAB_05ec5764:
    (*(code *)*puVar8)(plVar2,puVar8[1]);
  }
  return;
}


