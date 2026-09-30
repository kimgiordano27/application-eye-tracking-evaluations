/*
FUNCTION_NAME: OVRTelemetryMarker$$SetResult
ENTRY_POINT: 01a7a994
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void OVRTelemetryMarker__SetResult(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  long *plVar12;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(in_x10[4] + 2) * 0x10 + 0x138);
      goto OVRTelemetry__AddSDKVersionAnnotation;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_00d59724();
OVRTelemetry__AddSDKVersionAnnotation:
  (*(code *)*puVar5)();
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01a7abc0;
  uVar6 = FUN_0265a148(*(long *)(unaff_x19 + 0x20),0);
  if ((uVar6 & 1) == 0) {
    plVar11 = *(long **)(unaff_x19 + 0x30);
    if (plVar11 == (long *)0x0) goto LAB_01a7abc0;
    lVar9 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_01a7aa34;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x22,3);
LAB_01a7aa34:
    puVar2 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass58_0_<DOShakeRotation>b__0__;
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((DAT_0377cc61 & 1) == 0) {
      thunk_FUN_00d48444(
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass58_0_<DOShakeRotation>b__0__
                        );
      DAT_0377cc61 = 1;
    }
    if (iVar4 < (**(int **)(*(long *)puVar2 + 0xb8) * iVar1) / 1000) {
      return;
    }
    if ((char)(*(int **)(*(long *)puVar2 + 0xb8))[1] != '\0') {
      plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
      puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      plVar12 = *(long **)(unaff_x19 + 0x30);
      if (plVar12 == (long *)0x0) goto LAB_01a7abc0;
      lVar9 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_01a7ab20;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x22,3);
LAB_01a7ab20:
      in_stack_00000008._4_4_ = (*(code *)*puVar5)(plVar12,puVar5[1]);
      lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
      if (plVar11 == (long *)0x0) goto LAB_01a7abc0;
      if ((lVar9 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
      puVar2 = StringLiteral_302;
      if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar11[4] = lVar9;
      puVar3 = Method_System_Collections_Generic_List<VA_Shape>_get_Count__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660fcc(*(undefined8 *)puVar3,plVar11,0);
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_01a7abc0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_02659e4c(*(long *)(unaff_x19 + 0x20),0);
  }
  return;
}


