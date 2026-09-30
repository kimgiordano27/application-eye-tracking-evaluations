/*
FUNCTION_NAME: FUN_01a7a8ec
ENTRY_POINT: 01a7a8ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void FUN_01a7a8ec(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_34;
  
  if ((DAT_0377cc62 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033eee28);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass58_0_<DOShakeRotation>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VA_Shape>_get_Count__);
    DAT_0377cc62 = 1;
  }
  puVar2 = PTR_DAT_033eee28;
  plVar11 = *(long **)(param_1 + 0x30);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_033eee28) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto OVRTelemetry__AddSDKVersionAnnotation;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar11,*(long *)PTR_DAT_033eee28,2);
OVRTelemetry__AddSDKVersionAnnotation:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar9 = FUN_0265a148(*(long *)(param_1 + 0x20),0);
      if ((uVar9 & 1) == 0) {
        plVar11 = *(long **)(param_1 + 0x30);
        if (plVar11 == (long *)0x0) goto LAB_01a7abc0;
        lVar8 = *plVar11;
        lVar7 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_01a7aa34;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar11,lVar7,3);
LAB_01a7aa34:
        puVar3 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass58_0_<DOShakeRotation>b__0__
        ;
        iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        iVar1 = *(int *)(param_1 + 0x18);
        if ((DAT_0377cc61 & 1) == 0) {
          thunk_FUN_00d48444(
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass58_0_<DOShakeRotation>b__0__
                            );
          DAT_0377cc61 = 1;
        }
        if (iVar4 < (**(int **)(*(long *)puVar3 + 0xb8) * iVar1) / 1000) {
          return;
        }
        if ((char)(*(int **)(*(long *)puVar3 + 0xb8))[1] != '\0') {
          plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
          puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
          plVar12 = *(long **)(param_1 + 0x30);
          if (plVar12 == (long *)0x0) goto LAB_01a7abc0;
          lVar8 = *plVar12;
          lVar7 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_01a7ab20;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar12,lVar7,3);
LAB_01a7ab20:
          local_34 = (*(code *)*puVar5)(plVar12,puVar5[1]);
          lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_34);
          if (plVar11 == (long *)0x0) goto LAB_01a7abc0;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
            uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar6,0);
          }
          puVar2 = StringLiteral_302;
          if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar11[4] = lVar7;
          puVar3 = Method_System_Collections_Generic_List<VA_Shape>_get_Count__;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660fcc(*(undefined8 *)puVar3,plVar11,0);
        }
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01a7abc0;
        FUN_02659e4c(*(long *)(param_1 + 0x20),0);
      }
      return;
    }
  }
LAB_01a7abc0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


