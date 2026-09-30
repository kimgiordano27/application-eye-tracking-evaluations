/*
FUNCTION_NAME: Unity.VisualScripting.Comparison$$.ctor
ENTRY_POINT: 06490a50
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Unity_VisualScripting_Comparison___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  
  if ((DAT_071cdc98 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_IEnumerator<Vector2>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<Vector4>_TypeInfo);
    FUN_02f07e70(
                System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d39008);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<X509Extension>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<XNode>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<XmlAttribute>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<DebugUI_Panel>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_IEnumerator<Type>_TypeInfo);
    DAT_071cdc98 = 1;
  }
  puVar6 = System_Collections_Generic_IEnumerator<X509Extension>_TypeInfo;
  puVar2 = System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = (long *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_041d28b8(*(long *)(param_1 + 0x18),
                 *(undefined8 *)System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar10 = FUN_03e74d18(*(undefined8 *)puVar2);
    puVar9 = System_Collections_Generic_IEnumerator<XmlAttribute>_TypeInfo;
    puVar8 = System_Collections_Generic_IEnumerator<XNode>_TypeInfo;
    puVar7 = System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo;
    puVar5 = System_Collections_Generic_IEnumerator<Vector4>_TypeInfo;
    puVar4 = System_Collections_Generic_IEnumerator<Vector3>_TypeInfo;
    puVar3 = System_Collections_Generic_IEnumerator<Type>_TypeInfo;
    puVar2 = PTR_DAT_06d39008;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_03fd16fc(&stack0x00000018,*(long *)(param_1 + 0x10),
                   *(undefined8 *)System_Collections_Generic_IEnumerator<XNode>_TypeInfo);
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000028;
      while (uVar11 = FUN_04df6d30(&stack0x00000030,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar15 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(long **)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000040;
          thunk_FUN_02f411dc();
        }
        else {
          FUN_03fd0c9c(lVar10,in_stack_00000040,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_04df6d2c(&stack0x00000030,*(undefined8 *)puVar4);
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar15 = *(long *)puVar3;
      }
      lVar16 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
      if (lVar16 == 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar15 = *(long *)puVar3;
        }
        uVar18 = **(undefined8 **)(lVar15 + 0xb8);
        lVar16 = thunk_FUN_02ef1808(*(undefined8 *)
                                     System_Collections_Generic_IEnumerator<Vector2>_TypeInfo);
        FUN_04a5da30(lVar16,uVar18,
                     *(undefined8 *)System_Collections_Generic_IEnumerator<DebugUI_Panel>_TypeInfo,0
                    );
        plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        *plVar12 = lVar16;
        thunk_FUN_02f411dc(plVar12,lVar16);
      }
      if (lVar10 != 0) {
        FUN_03fd26c8(lVar10,lVar16,*(undefined8 *)puVar9);
        FUN_03fd16fc(&stack0x00000018,lVar10,*(undefined8 *)puVar8);
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        do {
          uVar11 = FUN_04df6d30(&stack0x00000030,*(undefined8 *)puVar5);
          plVar12 = in_stack_00000040;
          if ((uVar11 & 1) == 0) {
            FUN_04df6d2c(&stack0x00000030,*(undefined8 *)puVar4);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_03e7508c(lVar10,*(undefined8 *)
                                 System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo);
            return;
          }
          if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar15 = *in_stack_00000040;
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar11 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                goto LAB_06490d68;
              }
              uVar11 = uVar11 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_02eea86c(in_stack_00000040,*(long *)puVar2,2);
LAB_06490d68:
          uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if ((uVar11 & 1) != 0) {
            plVar14 = *(long **)(param_1 + 0x18);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            (**(code **)(*plVar14 + 0x238))(plVar14,plVar12,*(undefined8 *)(*plVar14 + 0x240));
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


