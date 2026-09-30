/*
FUNCTION_NAME: FUN_07312214
ENTRY_POINT: 07312214
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x073124d8) */

void FUN_07312214(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar6 = System_Xml_Schema_Datatype_NMTOKEN_TypeInfo;
  puVar5 = System_Collections_Specialized_CompatibleComparer_TypeInfo;
  puVar4 = System_Collections_CompatibleComparer_TypeInfo;
  puVar3 = PTR_DAT_07d99f68;
  puVar2 = PTR_DAT_07d990e0;
  puVar1 = PTR_DAT_07d97d68;
  if ((DAT_08268e3d & 1) == 0) {
    FUN_0373b518(System_Xml_Schema_Datatype_NMTOKEN_TypeInfo);
    FUN_0373b518(PTR_DAT_07d97d68);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d99048);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(System_Collections_CompatibleComparer_TypeInfo);
    FUN_0373b518(System_Collections_Specialized_CompatibleComparer_TypeInfo);
    FUN_0373b518(Unity_Burst_CompilationPriority_TypeInfo);
    FUN_0373b518(PTR_DAT_07d99050);
    FUN_0373b518(PTR_DAT_07d99f68);
    FUN_0373b518(PTR_DAT_07d990e0);
    DAT_08268e3d = 1;
  }
  Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(param_1,*(undefined8 *)puVar4);
  uVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_044a4918(uVar7,param_1,*(undefined8 *)puVar6,0);
  uVar7 = FUN_0426e774(param_1,*(undefined8 *)puVar2,uVar7,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  thunk_FUN_037aeb94();
  FUN_04c40798(param_1,*(undefined8 *)puVar5);
  puVar1 = PTR_DAT_07d896f8;
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar8 = (long *)FUN_051395a8(*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_07d99050);
  puVar3 = PTR_DAT_07d99048;
  puVar2 = PTR_DAT_07d89700;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_073123d0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,0);
LAB_073123d0:
    uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar11 & 1) == 0) break;
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0731242c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,0);
LAB_0731242c:
    uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    thunk_FUN_07331220(param_1,uVar7,*(undefined8 *)(param_1 + 0xb8),0);
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_073124a4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar1,0);
LAB_073124a4:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  FUN_0731208c(param_1);
  return;
}


