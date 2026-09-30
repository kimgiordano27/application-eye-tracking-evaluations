/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<LayerMask>$$Sirenix.Serialization.IFormatter.Serialize
ENTRY_POINT: 031b11bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


int Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
              (void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  code *pcVar11;
  
  uVar10 = 0;
  lVar7 = 0x20;
  while( true ) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_031b1388;
    if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_031b138c;
                    /* try { // try from 031b11e4 to 032b120f has its CatchHandler @ 031b0e3c */
    memcpy(&stack0x000000d0,(void *)(lVar3 + lVar7),200);
    if (unaff_x20 == 0) goto LAB_031b1388;
    pcVar11 = *(code **)(unaff_x20 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000198,&stack0x000000d0,200);
                    /* try { // try from 031b1210 to 032b1223 has its CatchHandler @ 031b12f8 */
    uVar2 = (*pcVar11)(uVar5,&stack0x00000198,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) break;
    uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
    uVar10 = uVar10 + 1;
    lVar7 = lVar7 + 200;
                    /* try { // try from 031b1224 to 032b12e7 has its CatchHandler @ 031b0e3c */
    if ((long)uVar2 <= (long)uVar10) {
LAB_031b123c:
      if ((int)uVar2 <= (int)uVar10) {
        return 0;
      }
      uVar6 = uVar10 & 0xffffffff;
      do {
        uVar10 = (ulong)((int)uVar10 + 1);
        do {
          iVar8 = (int)uVar10;
          uVar4 = (uint)uVar6;
          if ((int)uVar2 <= iVar8) {
            FUN_0358d1e4(*(undefined8 *)(unaff_x19 + 0x10),uVar6,(int)uVar2 - uVar4,0);
            iVar8 = *(int *)(unaff_x19 + 0x18);
            *(uint *)(unaff_x19 + 0x18) = uVar4;
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            return iVar8 - uVar4;
          }
          lVar7 = (long)iVar8 * 200 + 0x20;
          uVar10 = (ulong)iVar8;
          do {
            lVar3 = *(long *)(unaff_x19 + 0x10);
            if (lVar3 == 0) goto LAB_031b1388;
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_031b138c;
            memcpy(&stack0x000000d0,(void *)(lVar3 + lVar7),200);
            if (unaff_x20 == 0) goto LAB_031b1388;
            pcVar11 = *(code **)(unaff_x20 + 0x18);
            uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
            memcpy(&stack0x00000198,&stack0x000000d0,200);
            uVar2 = (*pcVar11)(uVar5,&stack0x00000198,*(undefined8 *)(unaff_x20 + 0x28));
            if ((uVar2 & 1) == 0) {
              uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
              break;
            }
            uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
            uVar10 = uVar10 + 1;
            lVar7 = lVar7 + 200;
          } while ((long)uVar10 < (long)uVar2);
          uVar9 = (uint)uVar10;
        } while ((int)uVar2 <= (int)uVar9);
        lVar7 = *(long *)(unaff_x19 + 0x10);
        if (lVar7 == 0) {
LAB_031b1388:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        if ((uVar1 <= uVar9) ||
           (memcpy(&stack0x00000008,(void *)(lVar7 + (long)(int)uVar9 * 200 + 0x20),200),
           uVar1 <= uVar4)) {
LAB_031b138c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar7 = lVar7 + (long)(int)uVar4 * 200;
        memcpy((void *)(lVar7 + 0x20),&stack0x00000008,200);
        thunk_FUN_01f51358(lVar7 + 0x98,0);
        uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar6 = (ulong)(uVar4 + 1);
      } while( true );
    }
  }
  uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
  goto LAB_031b123c;
}


