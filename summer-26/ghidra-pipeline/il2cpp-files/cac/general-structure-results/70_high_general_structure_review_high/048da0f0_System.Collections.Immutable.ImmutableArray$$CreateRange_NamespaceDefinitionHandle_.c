/*
FUNCTION_NAME: System.Collections.Immutable.ImmutableArray$$CreateRange<NamespaceDefinitionHandle>
ENTRY_POINT: 048da0f0
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Collections_Immutable_ImmutableArray__CreateRange<NamespaceDefinitionHandle>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined2 unaff_w20;
  void *unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined2 in_stack_00000018;
  long in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  
  FUN_03f13384(PTR_DAT_091209f8);
  FUN_03f13384(PTR_DAT_09120a00);
  FUN_03f13384(PTR_DAT_09120a08);
  FUN_03f13384(PTR_DAT_09120a10);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_03f4b2bc();
  }
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000a0 = 0;
  if ((unaff_x22 == 0) || (plVar2 = (long *)thunk_FUN_03f217fc(), plVar2 == (long *)0x0))
  goto LAB_048da55c;
  uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  memcpy(&stack0x00000008,unaff_x21,0x98);
  puVar1 = PTR_DAT_0911fee0;
  uVar4 = thunk_FUN_03f4e2c4(*(undefined8 *)PTR_DAT_0911fee0,&stack0x00000008);
  uVar3 = FUN_07327fec(*(undefined8 *)PTR_DAT_09120a10,uVar3,uVar4,0);
  if ((int)unaff_w24 < 5) {
    if (unaff_w24 == 3) {
      if ((in_stack_000000b8 != 0) &&
         (plVar2 = (long *)thunk_FUN_03f217fc(in_stack_000000b8,0), plVar2 != (long *)0x0)) {
        uVar4 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        FUN_07327bec(uVar3,*(undefined8 *)PTR_DAT_09120a08,uVar4,*(undefined8 *)PTR_DAT_091209d0,0);
        return;
      }
      goto LAB_048da55c;
    }
    puVar8 = (undefined8 *)PTR_DAT_091209e0;
    if (unaff_w24 == 4) goto LAB_048da530;
    if (unaff_w24 < 3) {
      uVar4 = thunk_FUN_03f786f8(PTR_DAT_09120a18);
      uVar3 = FUN_0731ca20(uVar3,uVar4,0);
      thunk_FUN_03f786f8(PTR_DAT_09111b70);
      uVar4 = thunk_FUN_03f4e68c();
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                (uVar4,uVar3,0);
      goto LAB_048da5d4;
    }
  }
  else {
    if (unaff_w24 == 5) {
      uVar5 = FUN_0888d400();
      if ((uVar5 & 1) == 0) {
LAB_048da370:
        uVar5 = UnityEngine_UIElements_Internal_TypePathVisitor__Unity_Properties_IPropertyVisitor_Visit<object,_StyleBackground>
                          (&stack0x000000c8);
        puVar8 = (undefined8 *)PTR_DAT_091209d8;
        if ((uVar5 & 1) == 0) {
LAB_048da530:
          FUN_0731ca20(uVar3,*puVar8,0);
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar4 = UnityEngine_UIElements_SafeHandleAccess__IsNull();
        uVar5 = FUN_04b55844(&stack0x000000b8,uVar4,&stack0x000000a0,*(undefined8 *)PTR_DAT_091209c8
                            );
        puVar8 = (undefined8 *)PTR_DAT_091209d8;
        if (((uVar5 & 1) == 0) || (in_stack_000000a0 == 0)) goto LAB_048da530;
        lVar6 = FUN_03f13470(*(undefined8 *)PTR_DAT_0910b678,6);
        if (lVar6 == 0) goto LAB_048da55c;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_048da5b0;
        *(undefined8 *)(lVar6 + 0x20) = uVar3;
        thunk_FUN_03f86000((undefined8 *)(lVar6 + 0x20),uVar3);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_048da5b0;
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_091209e8;
        thunk_FUN_03f86000();
        lVar7 = **(long **)(unaff_x19 + 0x38);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f4b260();
        }
        in_stack_00000010 = 0xffffffffffffffff;
        in_stack_00000008 = lVar7;
        in_stack_00000018 = unaff_w20;
        plVar2 = (long *)thunk_FUN_03f217fc(&stack0x00000008,0);
        if (plVar2 == (long *)0x0) goto LAB_048da55c;
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_048da5b0;
        *(undefined8 *)(lVar6 + 0x30) = uVar3;
        thunk_FUN_03f86000((undefined8 *)(lVar6 + 0x30),uVar3);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_048da5b0;
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)PTR_DAT_09120a00;
        thunk_FUN_03f86000();
        lVar7 = in_stack_000000a0;
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar4 = UnityEngine_UIElements_SafeHandleAccess__IsNull();
        uVar5 = FUN_04b55844(&stack0x000000b8,uVar4,&stack0x000000a8,*(undefined8 *)PTR_DAT_091209c8
                            );
        if (((uVar5 & 1) == 0) || (in_stack_000000a8 == 0)) goto LAB_048da370;
        lVar6 = FUN_03f13470(*(undefined8 *)PTR_DAT_0910b678,6);
        if (lVar6 == 0) goto LAB_048da55c;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_048da5b0;
        *(undefined8 *)(lVar6 + 0x20) = uVar3;
        thunk_FUN_03f86000((undefined8 *)(lVar6 + 0x20),uVar3);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_048da5b0;
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_091209e8;
        thunk_FUN_03f86000();
        lVar7 = **(long **)(unaff_x19 + 0x38);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f4b260();
        }
        in_stack_00000010 = 0xffffffffffffffff;
        in_stack_00000008 = lVar7;
        in_stack_00000018 = unaff_w20;
        plVar2 = (long *)thunk_FUN_03f217fc(&stack0x00000008,0);
        if (plVar2 == (long *)0x0) goto LAB_048da55c;
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_048da5b0;
        *(undefined8 *)(lVar6 + 0x30) = uVar3;
        thunk_FUN_03f86000((undefined8 *)(lVar6 + 0x30),uVar3);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_048da5b0;
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)PTR_DAT_09120a00;
        thunk_FUN_03f86000();
        lVar7 = in_stack_000000a8;
      }
      if ((lVar7 != 0) && (plVar2 = (long *)thunk_FUN_03f217fc(lVar7,0), plVar2 != (long *)0x0)) {
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        if (4 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x40) = uVar3;
          thunk_FUN_03f86000((undefined8 *)(lVar6 + 0x40),uVar3);
          if (5 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)PTR_DAT_091209f8;
            thunk_FUN_03f86000();
            FUN_07327cf4(lVar6,0);
            return;
          }
        }
LAB_048da5b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
LAB_048da55c:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    puVar8 = (undefined8 *)PTR_DAT_091209f0;
    if (unaff_w24 == 6) goto LAB_048da530;
  }
  thunk_FUN_03f786f8(PTR_DAT_0910bbd0);
  uVar4 = thunk_FUN_03f4e68c();
  FUN_0741aff8(uVar4,0);
LAB_048da5d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar4);
}


