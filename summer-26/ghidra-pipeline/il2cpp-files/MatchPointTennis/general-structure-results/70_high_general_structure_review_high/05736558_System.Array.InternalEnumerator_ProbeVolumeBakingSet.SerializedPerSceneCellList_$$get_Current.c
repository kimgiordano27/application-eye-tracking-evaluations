/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 05736558
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
               (undefined8 param_1,long param_2,long param_3,int param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong __n;
  undefined1 *__s;
  undefined1 *__src;
  long lVar8;
  long unaff_x28;
  long unaff_x29;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05736520 with catch @ 0573655c
                       catch(type#2 @ 00000000) { ... } // from try @ 05736554 with catch @ 0573655c
                        */
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x28 + 0x28);
  lVar8 = *(long *)(param_5 + 0x20);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar7;
  __s = __src + -uVar7;
  memset(__s,0,__n);
  if (param_2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar2 = thunk_FUN_0448520c();
    puVar3 = PTR_DAT_09f261e8;
  }
  else {
    if (param_3 != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 8))();
      puVar3 = PTR_DAT_09f1e5b8;
      if (iVar1 <= param_4) {
        puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48);
        uVar2 = *puVar6;
        *(long *)(unaff_x29 + -0x18) = param_2;
        *(undefined1 **)(unaff_x29 + -0x10) = __src;
        (*(code *)puVar6[2])(uVar2,puVar6,param_1,unaff_x29 + -0x18,__src);
        memcpy(__s,__src,__n);
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50))
                          (__s);
        FUN_094b5338(param_3,uVar2,(long)iVar1,0);
        if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      *(int *)(unaff_x29 + -0x18) = param_4;
      uVar2 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),unaff_x29 + -0x18);
      uVar4 = *(undefined8 *)(puVar3 + 0x48);
      *(int *)(unaff_x29 + -0x1c) = iVar1;
      uVar4 = thunk_FUN_04484e3c(uVar4,unaff_x29 + -0x1c);
      uVar5 = thunk_FUN_044adef4(PTR_DAT_09f28ae8);
      uVar4 = FUN_078b5afc(uVar5,uVar2,uVar4,0);
      thunk_FUN_044adef4(PTR_DAT_09f217f8);
      uVar2 = thunk_FUN_0448520c();
      uVar5 = thunk_FUN_044adef4(PTR_DAT_09f28a58);
      FUN_07996d40(uVar2,uVar4,uVar5,0);
      goto LAB_0573674c;
    }
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar2 = thunk_FUN_0448520c();
    puVar3 = PTR_DAT_09f28ae0;
  }
  uVar4 = thunk_FUN_044adef4(puVar3);
  FUN_07996cc8(uVar2,uVar4,0);
LAB_0573674c:
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2,param_5);
}


