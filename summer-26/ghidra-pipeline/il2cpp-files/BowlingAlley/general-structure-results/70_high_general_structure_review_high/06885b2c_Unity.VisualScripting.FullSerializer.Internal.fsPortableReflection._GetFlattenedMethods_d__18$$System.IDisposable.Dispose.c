/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection.<GetFlattenedMethods>d__18$$System.IDisposable.Dispose
ENTRY_POINT: 06885b2c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_<GetFlattenedMethods>d__18__System_IDisposable_Dispose
               (undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_076e10aa & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_get_Item__);
    DAT_076e10aa = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__)
        {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06885bc0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_032937ac(param_2,*(long *)
                                   Method_System_Collections_Generic_List<InternalType_152<MulticastDelegate>>_get_Item__
                          ,1);
LAB_06885bc0:
    puVar2 = Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_get_Item__;
    pcVar7 = (code *)*puVar4;
    uVar5 = puVar4[1];
    while( true ) {
      iVar3 = (*pcVar7)(param_2,1,uVar5);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar2;
      }
      if (iVar3 == *(int *)(*(long *)(lVar6 + 0xb8) + 4)) {
        return;
      }
      if (param_3 == (long *)0x0) break;
      uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,iVar3,*(undefined8 *)(*param_3 + 0x1f0));
      if ((uVar9 & 1) != 0) {
        return;
      }
      lVar8 = *param_2;
      lVar6 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06885c68;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(param_2,lVar6,0);
LAB_06885c68:
      (*(code *)*puVar4)(param_2,puVar4[1]);
      lVar8 = *param_2;
      lVar6 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_06885cc4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(param_2,lVar6,1);
LAB_06885cc4:
      pcVar7 = (code *)*puVar4;
      uVar5 = puVar4[1];
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


